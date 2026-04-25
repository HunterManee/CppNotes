#include <iostream>
using namespace std;

int main() {
    //Variables: A container that holds certain value
    //Pointer: A container that holds a certain address

    int n = 5;

    cout << n << endl; //Gives the value of the variable
    cout << &n << endl; //Gives the address of the variable

    int* ptr = &n; //The pointer is holding the address of the variable
    cout << ptr << endl;

    cout << *ptr << endl; //must derefence a pointer to show value of the variable.

    *ptr = 10;
    cout << *ptr << endl; //changing the value of pointer changes the value of original variable
    cout << n << endl;  

    int v;  //Pointers must reference another variable
    int* ptr2 = &v;
    *ptr2 = 7;
    cout << "v=" << v << endl;

}