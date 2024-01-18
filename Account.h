//Account interface
#pragma once
#include <string>
using std::string;
class Account{
  public:
    int account_num;//account number
    string name; //account holder name
    int balance; //account balance
    string account_type; //account type
    Account(int key_data, string v_data){ //constructor
      account_num = key_data;
      name = v_data;
      balance = 0;
    }
};