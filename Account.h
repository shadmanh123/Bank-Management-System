//Account interface
#pragma once
#include <string>
using std::string;
class Account{
  private:
    unsigned int account_number;//account number only positive to provide greater range of numbers
    string name; //account holder name
    int balance; //account balance can be negative
    string account_type; //account type as in Chequeings vs Savings
  public:
    Account(int account_number, const string& accountHolderName, string accountType);
    unsigned int getAccountNumber() const;
    string getName() const;
    int getBalance() const;
    string getAccountType() const;
};