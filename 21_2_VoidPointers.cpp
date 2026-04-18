#include <iostream>
using namespace std;

void printNumber(int* numberPtr);
void printChar(char* charPtr); 
void printVoid(void* ptr, char type);

int main() {
    int number = 5;
    char letter = 'a';

    // printNumber(&number);
    // printChar(&letter);

    print(&number, 'i');
    print(&letter, 'c');

}

void print(void* ptr, char type){
    switch(type) {
        case 'i':cout << *((int*)ptr) << endl;break; //Write out the int value in the void pointer
        case 'c':cout << *((char*)ptr) << endl;break; //Write out the char value in the void pointer

    }
}

void printNumber(int* numberPtr) { //A reference to a variable needs to passed
    cout << *numberPtr << endl;
}

void printChar(char* charPtr) { //A reference to a variable needs to passed
    cout << *charPtr << endl;
}