//Implementation of UnorderedMap
#include <iostream>
#include "Bank.h"
using std::string;
using std::cout;
using std::endl;

Bank::Bank() : accounts(){}
void Bank::createAccount(int account_num, const string& name, string& account_type){
    Account newAccount(account_num, name, account_type);
    accounts.insert({account_num, newAccount});
    cout << "Account created successfully. \n";
}