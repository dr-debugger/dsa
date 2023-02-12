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
  Node *searchNode_iteration(int val);
  Node *searchNode_recursion(int val, Node *node);
  int getHeight(Node *n);
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
        int val;
         cout << "Enter the value: ";
        cin >> val;

        // recursive approch
        Node *n = bst.searchNode_recursion(val, bst.getRoot());

        // iteration approch
        // Node *n = bst.searchNode_iteration(val);

        if(n != nullptr){
          cout << "The value is: " << n->value << endl;
        }else{
          cout << "no value found" << endl;
        }


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


Node* Tree :: searchNode_iteration(int val){
  if(isTreeEmpty()){
     return root;
  }

  Node *temp = root;
  while (temp != nullptr){
    if(val == temp->value){
          return temp;
    }

    if(val < temp->value){
          temp = temp->left;
    }else{
          temp = temp->right;
    }

  }

  // if no node found, return null;
  return nullptr;
}


Node * Tree :: searchNode_recursion(int val, Node *node){
  if(node == nullptr || node->value == val){
    return node;
  }

  if(val < node->value){
    return searchNode_recursion(val, node->left);
  }else{
    return searchNode_recursion(val, node->right);
  }
 // complexity O(logn)
}

int Tree :: getHeight(Node *root)
{
  // if there is only on node, height will be 0;
  // negative value represent that the tree or subTree is empty

  if(isTreeEmpty()){
    return -1;
  }

  int l_Height = getHeight(root->left);
  int r_height = getHeight(root->right);

  if(l_Height > r_height){
    return (l_Height + 1);
  }
    
  return (r_height + 1);


}

/**
 * @brief 
 * In BST in-order traversal retrieves the nodes in ascending sorted order
 * 
 */