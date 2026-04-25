#include <iostream>
using namespace std;

int main() {

    double a, b, c;
    cout << "Enter Length of Triangle Legs (a, b, c): ";
    cin >> a >> b >> c;

    cout << "You decribed ";
    if(a == b == c) {
        cout << "an quilateral ";
    }
    else {
        if(a != b && a != c && b != c) {
            cout << "a scalene ";
        }
        else {
            cout << "an isosceles ";
        }
    }
    cout << "triangle" << endl;

}