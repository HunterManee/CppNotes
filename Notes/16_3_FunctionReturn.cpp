#include <iostream>
using namespace std;

bool isPrimeNumber(int number);

int main() {

    int number;
    cout << "Number: ";
    cin >> number;

    (isPrimeNumber(number))?
    cout << "Prime Number" << endl : 
    cout << "Not Prime Number" << endl;



}

bool isPrimeNumber(int number)  {
    for(int i = 2; i < number; i++) {
        if(number % i != 0) continue;
        return false;
    }
    return true;
}