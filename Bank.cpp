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

int Bank::deleteAccount(int account_num){
    auto position = accounts.find(account_num);
    if(position != accounts.end()){
        accounts.erase(account_num);
        cout << "Account deleted successfully. \n";
        return 0;
    }
    else{
        cout << "Account could not be found and therefore cannot be deleted. \n";
        return -1;
    }
}

void Bank::viewAccount(int account_num) const{
    auto position = accounts.find(account_num);
    if(position != accounts.end()){
        cout << "Account information: \n ";
        cout << "Account Number: " << position -> second.getAccountNumber() << endl;
        cout << "Account Holder's Name: " << position -> second.getName() << endl;
        cout << "Account Type: " << position -> second.getAccountType() << endl;
        cout << "Account Balance: " << position -> second.getBalance() << endl;
    }
    else{
        cout << "Account not found. \n";
    }
}