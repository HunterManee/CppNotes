#include<iostream>
using namespace std;

void main() {
    //BMI calculator
    //weight(kg) / height * height(m)
    //Underweight < 18.5
    //Normal weight 18.5-24.9
    //Overweight    >25

    float weightIbs = 0;
    float heightInches = 0;
    int conversionIndex = 703;

    cout << "What is your weight(Ibs): ";
    cin >> weightIbs;

    cout << "What is your height(Inches): ";
    cin >> heightInches;

    float BMI = weightIbs * 703 / (conversionIndex * conversionIndex);

    if(BMI < 18.5){
        cout << "User is out UNDERWEIGHT: ";
    }
    else if (BMI >= 18.5 && BMI < 25)
    {
        cout << "User is out NORMAL: ";
    }
    else if(BMI >= 25 && BMI < 30)
    {
        cout << "User is out OVERWIEGHT: ";
    }
    else if(BMI >= 30) {
        cout << "User is out OBESE: ";
    }
    
    cout << BMI << endl;
}