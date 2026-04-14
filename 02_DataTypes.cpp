#include <iostream>
using namespace std;

int main(){
    int yearOfBirth = 1998; 
    char gender = 'm';
    bool isOlderThan18 = true;
    float avgGPA = 3.8; //4 bytes
    double balance = 123456789; //8 bytes

    cout << "Size of int is " << sizeof(int) << " bytes\n";

    cout << "Int min value is " << INT_MIN << endl; //gives the min value for int
    cout << "Int max value is " << INT_MAX << endl; //gives the max value for int

    cout << "Size of unsigned int is " << sizeof(unsigned int) << "bytes\n";
    cout << "UInt max value is " << UINT_MAX << endl;

    cout << "Size of bool is " << sizeof(bool) << " bytes\n";
    cout << "Size of char is " << sizeof(char) << " bytes\n";
    cout << "Size of float is " << sizeof(float) << " bytes\n";
    cout << "Size of double is " << sizeof(double) << " bytes\n";

    //DATA TYPE OVERFLOW

    int intMax = INT_MAX;
    cout << intMax << endl;
    cout << intMax + 1; //Goes to intMin

}