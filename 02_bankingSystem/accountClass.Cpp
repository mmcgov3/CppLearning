#include <iostream>
#include "accountClass.h"
using namespace std;

// constructor
accountClass::accountClass(int idV, int initialBalance, int pin1) {
    // error check balance
    if (initialBalance < 0){
        balance = 0;
        cout << "Initial balance cannot be negative. Balance is set to 0" << endl;
    } else {
        balance = initialBalance;
    }

    // assign the pin
    pin = pin1;

    // assign id
    id = idV;
}

// deposit method
void accountClass::deposit(int depositAmt){
    balance += depositAmt;
}

// withdraw method
void accountClass::withdrawl(int withdrawlAmt){
    if (balance - withdrawlAmt < 0){
        cout << "You do not have the funds to withdraw this amount. Balance has not changed" << endl;
    } else {
        balance -= withdrawlAmt;
    }
}

// view balance method
void accountClass::viewBalance(){
    int pinGuess;

    cout << "Please enter account " << id << "'s pin:\n" << endl;
    cin >> pinGuess;
    if (pinGuess == pin){
        cout << "Current balance is: " << balance << endl;
    } else {
        cout << "Pin is not correct. Cannot view balance." << endl;
    }
}

// destructor
accountClass::~accountClass() {
    cout << "Account No. " << id << " destroyed." << endl;
}