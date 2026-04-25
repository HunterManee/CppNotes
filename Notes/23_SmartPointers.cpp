#include <iostream>
#include <memory>
using namespace std;

int main() {

    //Can not share addresses
    unique_ptr<int>unPtr1 = make_unique<int>(25);
    cout << *unPtr1 << endl;

    //unPtr1 = NULL
    unique_ptr<int>unPtr2 = move(unPtr1);


}