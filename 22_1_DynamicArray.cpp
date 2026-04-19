#include <iostream>
using namespace std;

int main() {

    int size;
    cout << "Size: ";
    cin >> size;

    //"new" is a command that will allocate memory when we need it
    //"delete" is a command that will deallocate memory when we don't need it
    int* myArray = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Array[" << i << "] ";
        cin >> myArray[i];
    }

    for(int i = 0; i < size; i++) {
        //Two ways to dereference an array
        // cout << myArray[i] << " ";
        cout << *(myArray + i) << " ";

    }

    //Once the memory is no longer needed
    delete[]myArray;
    myArray = NULL; //Good practice: Set variable to NULL
}