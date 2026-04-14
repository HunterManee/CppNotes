#include <iostream>
using namespace std;

int main(){
    float annualSalary;
    cout << "Please enter your annual salary: ";
    cin >> annualSalary;
    
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary: " << monthlySalary;

    cout << "In 10 years you will earn: " << annualSalary * 10;
}