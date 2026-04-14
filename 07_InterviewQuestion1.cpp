#include <iostream>
using namespace std;

int main() {
    //program for swapping values of two variables

    //Standard
    int a = 20;
    int b = 10;
    cout << "a = " << a << " b = " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << " b = " << b << endl;

    //with out extra variables
    a = a + b; //30

    b = a - b; //20
    a = a - b; //10

    cout << "a = " << a << " b = " << b << endl;


}