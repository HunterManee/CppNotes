#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int length;
    cout << "Length: ";
    cin >> length;

    char symbol;
    cout << "Symbol: ";
    cin >> symbol;

    //Triangle Shape 1
    // for (int h = 0; h <= length; h++){
    //     for (int w = 0; w <= h; w++) {
    //         cout << setw(3) << symbol;
    //     }
    //     cout << endl;
    // }

    //Triangle Shape 2
    for (int h = 0; h <= length; h++){
        for (int w = h; w > 0; w--) {
            cout << setw(3) << symbol;
        }
        cout << endl;
    }


}