//Node interface
#pragma once
#include <string>
using std::string;
class Node{
  public:
    int account_num;//account number
    string name; //account holder name
    int balance; //account balance
    string account_type; //account type
    Node* left;
    Node* right;
    Node(int key_data, string v_data){ //constructor
      account_num = key_data;
      name = v_data;
      balance = 0;
      left = nullptr;
      right = nullptr;
    }
};