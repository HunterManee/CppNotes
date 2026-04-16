#include <iostream>
using namespace std;

template<typename T>
void Swap(T& a, T& b);

int main() {
    int a = 5, b = 7;
    cout << a << " - " << b << endl;
    Swap<int>(a,b); //<int> is optional; good for readablity though
    cout << a << " - " << b << endl;

    char c = 'c', d = 'd';
    cout << c << " - " << d << endl;
    Swap(c,d);
    cout << c << " - " << d << endl;

}

template<typename T>
void Swap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

