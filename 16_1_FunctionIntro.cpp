#include <iostream>
using namespace std;

void function(); //Declaration of Funtion goes before main

void main() {//First function to run

    cout << "Hello from main()" << endl;
    function(); //Invoke Function
}


void function() { //Definition of Function goes after main
    cout << "Hello from function()" << endl;
}