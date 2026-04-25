#include <iostream>
using namespace std;

int recursive_sum(int m, int n);

//Sum numbers between m-n
int main() {

    int m=2, n=4;

    // int sum = 0;
    // for(int i = m; i <= n; i++) {
    //     sum += i;
    // }
    // cout << "Sum = " << sum;

    cout << "Sum = " << recursive_sum(m, n);
}

int recursive_sum(int m, int n) {
    if(m == n) return m; //Without this will result in stackoverflow exception
    return m + recursive_sum(m + 1, n);
}