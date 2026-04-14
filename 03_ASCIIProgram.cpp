#include <iostream>
using namespace std;

int main() {
    cout << (int)'a' << endl; //type casting
    cout << int('a') << endl; //using int constructor
    cout << int('A') << endl;
    cout << char(65) << endl;

    char c1, c2, c3, c4, c5;
    cout << "Enter 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII message: " << int(c1) << " " << int(c2)
     << " " << int(c3) << " " << int(c4) << " " << int(c5);
}