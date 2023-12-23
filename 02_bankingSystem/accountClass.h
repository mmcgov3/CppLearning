#ifndef ACCOUNTCLASS_H
#define ACCOUNTCLASS_H

class accountClass {
private:
    int pin;

public:
    int id;
    int balance;

    accountClass(int idV, int initialBalance, int pin1);
    void deposit(int depositAmt);
    void withdrawl(int withdrawlAmt);
    void viewBalance();
    ~accountClass();
};

#endif
