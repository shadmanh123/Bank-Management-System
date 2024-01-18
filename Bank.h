//Unordered Map Interface
#pragma once
#include<string>
#include "Account.h"

class Bank{
  private:
  // Need to make an account number generator
   
    int mapSize;
    void copyMap(int* &this_map, int* copying_map); //helper function for copy constructor and overloaded assignment operator
    void deleteMap(int* ptr); //helper function for destructor and overloaded assignment operator
    int* find(int account_num); //helper function to find account
    
public:
    Bank(); //constructor
    Bank(const Bank &tree); //destructor
    Bank& operator=(const Bank &tree); //overloaded assignmnet operator
    ~Bank(); //destructor
    void insert(int account_num, string name, int balance, string account_type); //insert account into bank
    int remove(int account_num); //remove account from bank
    void search(int account_num) const; //view account information 
    void update(int account_num); //update account information
    int size() const; //number of accounts in the bank 
    void print(int* ptr) const; //print of all accounts in the bank
};