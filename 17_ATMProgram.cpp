#include <iostream>
using namespace std;

void showMenu();

int main() {
    //check balance, deposit, withdraw, show menu
    int option;
    double balance = 500;

    do{
        showMenu();
        cout << "Option: ";
        cin >> option;
        system("cls");


        switch(option) {
            case 1: cout << "Balance is: " << balance << " $" << endl; break;
            case 2: cout << "Deposit amount:";
                double depositAmount;
                cin >> depositAmount;
                balance += depositAmount;
                break;
            case 3: cout << "Withdraw amount:";
                double withdrawAmount;
                cin >> withdrawAmount;
                if(balance >= withdrawAmount)
                    balance -= withdrawAmount;
                else
                    cout << "Not Enough Money" << endl;
                break;
        }
    }while(option != 4);

}

void showMenu() {

    cout << "**********MENU**********";
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "************************";


}