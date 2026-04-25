#include <iostream>
using namespace std;

//Arguments get passed into function's parameter

void introduceMe(string name, string city, int age);

int main() {
    string name;
    cout << "Name: ";
    cin >> name;

    string city;
    cout << "City: ";
    cin >> city;

    int age;
    cout << "Age: ";
    cin >> age;

    introduceMe(name, city, age);
}

//If default value is placed in middle parameter than
//a default value will have to be made for parameters after.
void introduceMe(string name, string city, int age = 0) {

    cout << "My name is " << name << endl;
    cout << "I am from " << city << endl;

    if(age == 0) return;
    cout << "I am " << age << " years old" << endl;


}