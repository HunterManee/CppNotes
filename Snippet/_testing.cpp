#include <iostream>
using namespace std;

class BaseClass {
    public:
        virtual ~BaseClass() = default;
        
        virtual void function() = 0;

        virtual BaseClass* clone() const = 0;
        virtual string toString() const = 0;
};

class DerivedClassA : public BaseClass {
    private:
        double Number;

    public:
        DerivedClassA(double number = 0): Number{number} {}
        DerivedClassA(const DerivedClassA& toCopy) {
            *this = toCopy;
        }
        void function() override {
            cout << toString() << endl;
        }

        BaseClass* clone() const override {
            return new DerivedClassA(*this);
        }

        string toString() const override {
            string output = "";
            output += "Derived Class A:\n";
            output += "\tNumbers => " + to_string(Number) + "\n";
            return output;
        }
};

struct CustomType {
    double X;
    double Y;

    CustomType(double x = 0, double y = 0):
    X{x}, Y{y} {}

    string toString() const {
        string output = "";
        output += "{ " + to_string(X) + " , " + to_string(Y) + " }";
        return output;
    }
};
class DerivedClassB : public BaseClass {
    private:
        CustomType* Data{nullptr};
        int Size{0};

    public:

        //Default Constructor
        DerivedClassB() {
            Data = new CustomType[Size];
        };
        //Destructor
        ~DerivedClassB() override{
            delete[] Data;
            Data = nullptr;
            Size = 0;
            cout << "Destructor\n";
        }
        //Copy Constructor
        DerivedClassB(const DerivedClassB& toCopy):
        Size(toCopy.Size) {
            Data = new CustomType[Size];
            for(int i = 0; i < Size; i++) {
                Data[i] = toCopy.Data[i]; //copy each object
            }
            cout << "Copy Constructor\n";
        }

        void function() override {
            cout << toString() << endl;
        }

        void addElement(const CustomType& entry) {
            Size++; //0 => 1

            //Copy old elements
            CustomType* temp = new CustomType[Size];
            for(int i = 0; i < (Size - 1); i++) {
                temp[i] = Data[i];
            }

            //Add new element
            temp[Size - 1] = entry;

            //Clean up
            delete[] Data;  //delete old Data
            Data = temp;    //Move new data to Data

        }

        BaseClass* clone() const override{
            return new DerivedClassB(*this);
        }
        string toString() const override {
            string output = "";
            output += "Derived Class B:\n";
            output += "\tData => [ ";

            for(int i = 0; i < Size; i++) {
                if(i < (Size - 1))
                    output += Data[i].toString() + " , ";
                else
                    output += Data[i].toString();
            }

            output += " ]";

            return output;
        }
};

class Entity {
    private:
        BaseClass* baseClass;
    
    public:
        Entity(const BaseClass& derivedClass):
        baseClass(derivedClass.clone()) {}

        ~Entity() {
            delete baseClass;
        }

        void testing() {
            baseClass->function();
        }
};

int main() {
    DerivedClassA DCA{};
    
    Entity entity1{DCA};
    entity1.testing();


    DerivedClassB DCB{};
    DCB.addElement({1,1});
    DCB.addElement({1,2});

    Entity entity2{DCB};
    entity2.testing();
}