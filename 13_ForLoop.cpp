#include <iostream>
using namespace std;

int main() {

    //The factorial of a number
    //6! = 1 * 2 * 3 * 4 * 5 * 6 = 720

    int number;
    cout << "Number: ";
    cin >> number; //3

    int factorial = 1;//1

    //Assending
    // for(int i = 1; i <= number; i++) { // i = 1
    //     factorial *= i;
    // }

    //Decending
    for(int i = number; i > 0; i--) { // i = number
        factorial *= i;
    }
    
    cout << number << "!=" << factorial;
}
