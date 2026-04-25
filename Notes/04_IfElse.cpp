#include <iostream>
using namespace std;

int main() {
    //User enters integer number
    //Program write out if that number is even or odd

    cout << 2 % 2; //modulus gives remainder after div

    int number;
    cout << "Please enter whole number: ";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "You have entered an even number." << endl;
    }
    else{
        cout << "You have entered am odd number." << endl;
    }
    cout << "Thanks. Bye.";


}