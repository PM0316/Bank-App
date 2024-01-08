// Bank App.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <memory>
#include "Account.h"
/*
This app allows you to open an account, save money, deposit, and withdraw. It also shows current account balanace
i wanted to use this to showcase my skills on object oriented programming principles and other c++ principles

Account.h is the base class
Account_Util.h contains Utility helper functions for Account * class
I_Printable is the interface for the base class
Checking_Account, Savings_Account and Trust_Account are the derived from the base class Account.h
*/

#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    

    Checking_Account anita{ "Anita", 5000 };
    cout << anita << endl;

    Account* trust = new Trust_Account("Ada");
    cout << *trust << endl;

    Account* p1 = new Checking_Account("Segun", 10000);
    Account* p2 = new Savings_Account("Kelvin", 1000);
    Account* p3 = new Trust_Account("Adebowale");

    std::vector<Account*> accounts {p1, p2, p3};

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    display(accounts);

    delete p1;
    delete p2;
    delete p3;
    return 0;
}



