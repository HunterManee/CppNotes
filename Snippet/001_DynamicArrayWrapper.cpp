#include <iostream>

class MyClass {
public:
    int value;

    MyClass(int v = 0) : value(v) {}

    std::string toString() const {
        return std::to_string(value);
    }
};
class ArrayWrapper {
private:
    MyClass* data;
    int size;

public:
    // Constructor
    ArrayWrapper(int n) : size(n) {
        data = new MyClass[size];
        std::cout << "Constructor\n";
    }
    // Destructor
    ~ArrayWrapper() {
        delete[] data;
        std::cout << "Destructor\n";
    }
    // Copy Constructor (deep copy)
    ArrayWrapper(const ArrayWrapper& other) : size(other.size) {
        data = new MyClass[size];
        for (int i = 0; i < size; ++i) {
            data[i] = other.data[i];  // copy each object
        }
        std::cout << "Copy Constructor\n";
    }
    // Move Constructor
    ArrayWrapper(ArrayWrapper&& other) noexcept
        : data(other.data), size(other.size) {
        
        other.data = nullptr; // prevent double delete
        other.size = 0;

        std::cout << "Move Constructor\n";
    }
    // Copy Assignment
    ArrayWrapper& operator=(const ArrayWrapper& other) {
        if (this == &other) return *this;

        delete[] data;

        size = other.size;
        data = new MyClass[size];

        for (int i = 0; i < size; ++i) {
            data[i] = other.data[i];
        }

        std::cout << "Copy Assignment\n";
        return *this;
    }
    // Move Assignment
    ArrayWrapper& operator=(ArrayWrapper&& other) noexcept {
        if (this == &other) return *this;

        delete[] data;

        data = other.data;
        size = other.size;

        other.data = nullptr;
        other.size = 0;

        std::cout << "Move Assignment\n";
        return *this;
    }

    std::string toString() const {

        if(data == nullptr) return "nullptr";

        std::string output = "[";

        for(int i = 0; i < size; i++) {
            if(i == (size - 1))
                output += data[i].toString();
            else
                output += data[i].toString() + ",";
        }

        output += "]";

        return output;
    }
};

int main() {
    std::cout << "---- Create a ----\n";
    ArrayWrapper a(3);
    std::cout << "a(" << &a << ") => " << a.toString() << std::endl;

    std::cout << "\n---- Copy construct b from a ----\n";
    ArrayWrapper b = a;  // copy constructor
    std::cout << "b(" << &b << ") => " << b.toString() << std::endl;
    std::cout << "a(" << &a << ") => " << a.toString() << std::endl;

    std::cout << "\n---- Move construct c from a ----\n";
    ArrayWrapper c = std::move(a);  // move constructor
    std::cout << "c(" << &c << ") => " << c.toString() << std::endl;
    std::cout << "a(" << &a << ") => " << a.toString() << std::endl;

    std::cout << "\n---- Create d ----\n";
    ArrayWrapper d(2);
    std::cout << "d(" << &d << ") => " << d.toString() << std::endl;

    std::cout << "\n---- Copy assign d = b ----\n";
    d = b;  // copy assignment
    std::cout << "d(" << &d << ") => " << d.toString() << std::endl;
    std::cout << "b(" << &b << ") => " << b.toString() << std::endl;


    std::cout << "\n---- Move assign d = std::move(c) ----\n";
    d = std::move(c);  // move assignment
    std::cout << "d(" << &d << ") => " << d.toString() << std::endl;
    std::cout << "c(" << &c << ") => " << c.toString() << std::endl;

    std::cout << "\n---- End of main ----\n";
    return 0;
}