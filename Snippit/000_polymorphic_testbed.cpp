#include <iostream>
using namespace std;


class BaseClass {
    public:
        virtual ~BaseClass() = default;
        virtual void function() = 0; //pure virtual
};
class derivedClassA : public BaseClass {
    public:
        void function() override {
            std::cout << "From Derived Function A\n";
        }   
};
class derivedClassB : public BaseClass {
    public:
        void function() override {
            std::cout << "From Derived Function B\n";
        } 
};

class TestingGrounds {
    private:
        BaseClass* BC;

    public:
        TestingGrounds(BaseClass* dC)
            : BC(dC) {}

        ~TestingGrounds() {
            delete BC;
        }

        void testing() {
            BC->function();
        }
};

int main() {
    derivedClassA dA;
    derivedClassB dB;
    
    TestingGrounds tg1{&dA};
    TestingGrounds tg2{&dB};

    tg1.testing();
    tg2.testing();
}