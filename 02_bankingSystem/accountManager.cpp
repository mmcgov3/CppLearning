#include <iostream>
using namespace std;
#include "accountClass.h"


int main(){
    char input = 'G';
    int depAmt;
    int withdrawlAmt;
    int flag = 1;

    accountClass A1(1, 0, 4033);

    while (flag){
        cout << "What would you like to do?:\nD - Deposit\nW - Withdrawl\nV - View Balance\nQ - Quit" << endl;
        cin >> input;

        switch (input){
            case 'D':
                cout << "How much do you want to deposit?:\n" << endl;
                cin >> depAmt;
                A1.deposit(depAmt);
                break;
            case 'W':
                cout << "How much do you want to withdrawl?:\n" << endl;
                cin >> withdrawlAmt;
                A1.withdrawl(withdrawlAmt);
                break;
            case 'V':
                A1.viewBalance();
                break;
            case 'Q':
                flag = 0;
                break;
        }
    }

    return 0;
}