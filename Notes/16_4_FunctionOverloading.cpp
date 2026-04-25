#include <iostream>
using namespace std;

int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);


int main() {
    
    cout << sum(4, 3) << endl;
    cout << sum(4.4, 3.3) << endl;
    cout << sum(4.4, 3.3, 2.2) << endl;

}

int sum(int a, int b) {
    int result = a + b;
    return result;
}

double sum(double a, double b) {
    double result = a + b;
    return result;
}

float sum(float a, float b, float c) {
    float result = a + b + c;
    return result;
}