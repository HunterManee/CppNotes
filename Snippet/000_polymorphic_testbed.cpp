#include <iostream>
using namespace std;


class BaseClass {
    public:
        virtual ~BaseClass() = default;
        
        virtual void function() = 0; //pure virtual
        
        virtual BaseClass* clone() const = 0;
        virtual string toString() const = 0;
};
class derivedClassA : public BaseClass {
    public:
        derivedClassA(){}
        derivedClassA(const derivedClassA& toCopy) {
            *this = toCopy;
        }

        void function() override {
            std::cout << "From Derived Function A\n";
        }  

        BaseClass* clone() const override {
            return new derivedClassA(*this);
        }
        string toString() const override {

        }
};
class derivedClassB : public BaseClass {
    double number;
    public:
        derivedClassB(){}
        derivedClassB(const derivedClassB& toCopy) {
            *this = toCopy;
        }

        void function() override {
            std::cout << "From Derived Function B\n";
        } 

        BaseClass* clone() const override {
            return new derivedClassB(*this);
        }
        string toString() const override {

        }
};

class TestingGrounds {
    private:
        BaseClass* BC;

    public:
        TestingGrounds(const BaseClass& dC)
            : BC(dC.clone()) {}


        ~TestingGrounds() {
            delete BC;
        }

        void testing() {
            BC->function();
        }
};

int main() {

    //Stack Test
    derivedClassA dA;
    TestingGrounds tg1{dA};
    tg1.testing();


    //Heap Test
    derivedClassB* dB = new derivedClassB();
    TestingGrounds tg2{*dB};

    delete dB;
    dB = nullptr;

    tg2.testing();
}