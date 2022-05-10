#include <iostream>
#include <iostream>
#include "Node.h"
#include "BST.h"
#include "BST.cpp"

//std::cout;
//std::endl;
void insertion_test(){
  BST bank;
  bank.insert(12345, "John Doe", 2000, "Chequings");
  bank.print(bank.root);
  cout << "The Bank has # " << bank.size() << " accounts" <<endl;
}

void remove_test(){
  BST bank;
  bank.insert(12345, "John Doe", 2000, "Chequings");
  //bank.print(bank.root);
  cout << "The Bank has # " << bank.size() << " accounts" <<endl;
  bank.remove(12345);
  cout << "The Bank has # " << bank.size() << " accounts" <<endl;

}

int main() {
  //insertion_test();
  remove_test();
  return 0;
}