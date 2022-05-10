//Binary Search Tree Interface
#pragma once
#include<string>
#include "Node.h"

class BST{
  private:
//Need to make an account number generator
    // Node* root;
    int tree_size;
    void copyBST(Node* &this_tree, Node* copying_tree); //helper function for copy constructor and overloaded assignment operator
    void deleteBST(Node* ptr); //helper function for destructor and overloaded assignment operator
    Node* find(int account_num); //helper function to find account
    Node* BST::find(int account_num, Node* parent); //helper function to find account and parent of account
    Node* getSuccesor(int account_num); //helper function for obtaining successor of a node
  public:
    Node* root;
    BST(); //constructor
    BST(const BST &tree); //destructor
    BST& operator=(const BST &tree); //overloaded assignmnet operator
    ~BST(); //destructor
    void insert(int account_num, string name, int balance, string account_type); //insert account into database
    int remove(int account_num); //remove account from database
    void search(int account_num) const; //view account information 
    void update(int account_num); //update account information
    int size() const; //number of accounts in the database
    void print(Node* ptr) const; //In-Order print of all accounts in the database
};