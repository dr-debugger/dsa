#include<iostream>
#include<string>
using namespace std;

class Node{
  public:
    int value;
    Node *left, *right;

    Node(){
      value = 0;
      left = right = nullptr;
    }
    Node(int v){
      value = v;
      left = right = nullptr;
    }
};

class Tree{
  Node *root;

public:
  Tree()
  {
      root = nullptr;
  }

  // friend void setvalueOnRoot(Tree &tree, Node *value);

  Node* getRoot(){ // getter
      return root;
  }

  bool isTreeEmpty();
  Node* insertNode(int value, Node *temp = nullptr);
  void printvalues(Node *temp);
};

// global friend function
// void setvalueOnRoot(Tree &tree, Node *value){
//   tree.root = value;
// }

int main(){
    Tree bst;
    int option;

    do{
      cout << "what operation do you want to perform ?"<< endl;
      cout << "press 1 to insert node" << endl;
      cout << "press 2 to search node" << endl;
      cout << "press 3 to delete node" << endl;
      cout << "press 4 to print values" << endl;
      cout << "press 5 to clear screen" << endl;
      cout << "press 0 to exit" << endl;

      cin >> option;

      switch (option)
      {
      case 0:
        break;

      case 1: {
        int val;
        cout << "Enter the value: ";
        cin >> val;

        // if(bst.isTreeEmpty()){
        //   Node *rootValue = bst.insertNode(val, nullptr);
        //   setvalueOnRoot(bst, rootValue);
        //   break;
        // }
        
        bst.insertNode(val, bst.getRoot());

        break;
      }

      case 2: {
        
        break;
      }

      case 3: {

        break;
      }

      case 4: {
        if(bst.isTreeEmpty()){
          cout << "Tree is empty!" << endl;
          break;
        }

        bst.printvalues(bst.getRoot());
        cout << endl;
        break;
      }

      case 5: {
        system("cls");
        break;
      }

      default: { 
          cout << "wrong option" << endl;
          break;
        }
      }

    } while (option != 0);

    
    return 0;
}

bool Tree :: isTreeEmpty (){
  return root == nullptr;
}

Node* Tree :: insertNode(int value, Node *temp){
  if(isTreeEmpty()){
      return root = new Node(value);
  };

  if(temp == nullptr){
      return new Node(value);
  }

  if(value > temp->value){
    temp->right = insertNode(value, temp->right);
  }
  
  if(value < temp->value){
     temp->left = insertNode(value, temp->left);
  }

  return temp; // returning temp as-it-is, to prevent duplicate entry
}


void Tree :: printvalues(Node *temp){  
  // printing values in depth first traversal from left to right
  if(temp == nullptr) {
     return;
  }
  printvalues(temp->left);

  cout << temp->value << " ";

  printvalues(temp->right);
}

/**
 * @brief 
 * In BST in-order traversal retrieves the nodes in ascending sorted order
 * 
 */