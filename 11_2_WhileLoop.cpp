#include <iostream>
using namespace std;

int main() {

    //Count digit of a number
    int number; 
    cout << "Number: ";
    cin >> number;

    if (number == 0)
        cout << "You have entered 0.\n";
    else {
        (number < 0) ? number *= -1 : number;
        int counter = 0;
        while(number > 0) {
            number /= 10; //Taking advantage of whole number division 12.3 => 12
            counter++;
        }
        cout << "Your number contains " << counter << " digits"; 
    }

}