//Unordered Map Interface
#pragma once
#include <unordered_map>>
#include "Account.h"

class Bank{
  private:
    std::unordered_map<int, Account> accounts;
    
  public:
    Bank();
    void createAccount(int account_num, const string& name, string& account_type); //create bank account
    int deleteAccount(int account_num); //remove account from bank
    void viewAccount(int account_num) const; //view account information 
    void updateAccount(int account_num); //update account information
    int totalNumberOfAccounts() const; //number of accounts in the bank 
    void printAllAccountNumbers() const; //print of all account numbers in the bank
};