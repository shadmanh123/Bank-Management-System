//Implementation of UnorderedMap
#include <iostream>
#include "Account.h"
#include "Bank.h"
#include <unordered_map>
using std::string;
using std::cout;
using std::endl;
Bank::Bank(){
    std::unordered_map<int, Account> bank();
}

// void UnorderedMap::copyUnorderedMap(Node* &this_tree, Node* copying_tree){
//   if(copying_tree == NULL){ //checks condition when the pointer for tree to be copied is empty
//     this_tree = NULL;
//   }
//   else{
//     Node* newNode = new Node(copying_tree -> account_num, copying_tree -> name); //create a new node for tree to be copied into 
//     this_tree -> left = copying_tree -> left;
//     this_tree -> right = copying_tree -> right;
//     copyUnorderedMap(this_tree -> left, copying_tree -> left); //recursively calling each child and copying node values
//     copyUnorderedMap(this_tree -> right, copying_tree -> right);
//   }
// }
// UnorderedMap::UnorderedMap(const UnorderedMap &tree){
//   copyUnorderedMap(this -> root, tree.root);
//   tree_size = tree.tree_size; //update tree size
// }

// void UnorderedMap::deleteUnorderedMap(Node* ptr){
//   if(ptr == nullptr){ //base case when pointer is pointing to nothing
//     return;
//   }
//   else{
//     Node* left_child = ptr -> left;
//     Node* right_child = ptr -> right; 
//     delete ptr; //deleting the node
//     deleteUnorderedMap(left_child);//recursively calling each child and deleting the node
//     deleteUnorderedMap(right_child);
//   }
// }

// UnorderedMap& UnorderedMap::operator=(const UnorderedMap &tree){
//   if(this != &tree){ //checks to make sure that both pointers are not pointing to the same tree
//     deleteUnorderedMap(root);
//     copyUnorderedMap(this -> root, tree.root);
//   }
//   return *this;
// }

// UnorderedMap::~UnorderedMap(){
//   deleteUnorderedMap(root);
// }

// void UnorderedMap::insert(int account_num, string name, int balance, string account_type){
//   Node* newNode = new Node(account_num, name);
//   newNode -> balance = balance;
//   newNode -> account_type = account_type;
//   Node* prev = nullptr;
//   Node* curr = root;
//   if(root == nullptr){
//     root = newNode;
//     tree_size++;
//     return;
//   }
//   else{
//     while(curr != nullptr){
//       prev = curr;
//       if(account_num == curr -> account_num){
//         return;
//       }
//       else if(account_num > curr->account_num){
//         curr = curr -> right;
//       }
//       else{
//         curr = curr -> left;
//       }
//     }
//     if(account_num > prev -> account_num){
//       prev -> right = newNode;
//       tree_size++;
//     }
//     else{
//       prev -> left = newNode;
//       tree_size++;
//     }
//   }
//   return;
// }

// Node* UnorderedMap::find(int account_num){
//   Node* ptr = root;
//   if (root == nullptr){
//     return nullptr;
//   }
//   else{
//     while(ptr -> account_num != account_num){
//       if(ptr -> account_num > account_num){
//         ptr = ptr -> left;
//       }
//       else{
//         ptr = ptr -> right;
//       }
//     }
//   }
//   return ptr;
// }

// Node* UnorderedMap::find(int account_num, Node* parent){
//   Node* ptr = root;
//   if (root == nullptr){
//     parent = nullptr;
//     return nullptr;
//   }
//   else{
//     if(ptr -> account_num == account_num){
//       parent = ptr;
//     }
//     else{
//       while(ptr -> account_num != account_num){
//         parent = ptr;
//         if(ptr -> account_num > account_num){
//           ptr = ptr -> left;
//         }
//         else{
//           ptr = ptr -> right;
//         }
//       }
//     }
//   }
//   return ptr;
// }

// Node* UnorderedMap::getSuccesor(int account_num){ //check to see if search can be used here
//   Node* ptr = find(account_num);
//   if(ptr -> right != nullptr){
//     ptr = ptr -> right;
//     while(ptr -> left != nullptr){
//       ptr = ptr -> left;
//     }
//   }
//   return ptr;
// }

// int UnorderedMap::remove(int account_num){
//   Node* parent_ptr = root;
//   Node* remove_node = find(account_num, parent_ptr);
//   cout << "The remove node is " << remove_node -> account_num << " and the parent is " << parent_ptr -> account_num << endl;
//   Node* successor = getSuccesor(account_num);
//   cout << "Successor node is " << successor -> account_num << endl;
//   int value = remove_node -> account_num;
//   if(remove_node == root){
//     delete remove_node;
//     tree_size--;
//     root = nullptr;
//   }
  
//   else if((remove_node -> left == nullptr) && (remove_node -> right == nullptr)){
//     if(remove_node == parent_ptr -> left){
//       parent_ptr -> left == nullptr;
//     }
//     else{
//       parent_ptr -> left == nullptr;
//     }
//     delete remove_node;
//     cout << "root is " << root->account_num << endl;
//     tree_size--;
//   }

//   return value;
// }

// int UnorderedMap::size() const{
//   return tree_size;
// }

// void UnorderedMap::print(Node* ptr) const{
//   if(ptr == nullptr){
//     return;
//   }
//   else{
//     print(ptr -> left);
//     cout << "Account no: " << ptr -> account_num << " Account Holder Name: " << ptr -> name;
//     cout << " Account balance: $" << ptr -> balance << " Account Type: " << ptr -> account_type << endl;
//     print(ptr->right);
//   }
// }