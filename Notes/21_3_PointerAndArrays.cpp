#include <iostream>
using namespace std;

int main() {
    int luckNumbers[5] = {2, 3, 5, 7, 9};
    //Gives the address of the first element in array
    cout << luckNumbers << endl; 
    //The address of the first element in array
    cout << &luckNumbers[0] << endl;
    //These two address are the same

    //What is the value at index 2 in the array
    cout << luckNumbers[2] << endl;
    //Take the address of the first element and add 2
    //dereference that address -> the value at index 2
    cout << *(luckNumbers + 2) << endl; 
    //These two lines are asking for the same thing


    int unluckyNumbers[5];
    for(int i = 0; i < 5; i++){
        cout << "Number: ";
        cin >> unluckyNumbers[i];
    }

    for(int i = 0; i < 5; i++){
        cout << *(unluckyNumbers + i) << " ";
    }


}