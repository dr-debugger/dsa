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

class Tree {
  Node *root;
  
  public:
  Tree(){
      root = nullptr;
  }

  Node* getRoot(){
      return root;
  }

  bool isTreeEmpty(){
      return root == nullptr;
  }

  void addNode(int value);
  void printPreOrder(Node *node);
  void printInOrder(Node *node);
  void printPostOrder(Node *node);
};

int main(){

  Tree tree;
  tree.addNode(10);
  tree.addNode(80);
  tree.addNode(30);
  tree.addNode(90);
  tree.addNode(20);

  tree.printPreOrder(tree.getRoot());
  cout << "    " << endl;
  tree.printInOrder(tree.getRoot());
  cout << "    " << endl;
  tree.printPostOrder(tree.getRoot());

  return 0;
}

void Tree::addNode(int value){

  // this is a simple binary tree, where every left subTree has every value greater than the root of that subtree

  Node *newNode = new Node(value);

  if(isTreeEmpty()){
      root = newNode;
      return;
  }

  Node *temp = root;
  Node *prev;
  while (true){
    prev = temp;

    if (value < temp->value){
      temp = temp->left;
      if(temp == nullptr){
        prev->left = newNode;
        return;
      }
    }else{
      temp = temp->right;
      if(temp == nullptr){
        prev->right = newNode;
        return;
      }
    }
  }

}

void Tree :: printPreOrder(Node *node){
  if(node == nullptr){
    return;
  }
  // display the node value
  cout << node->value << endl;

  printPreOrder(node->left);
  printPreOrder(node->right);
}

void Tree :: printInOrder(Node *node){
  if(node == nullptr){
    return;
  }
  printInOrder(node->left);

  // display the node value
  cout << node->value << endl;

  printInOrder(node->right);
}

void Tree :: printPostOrder(Node *node){
  if(node == nullptr){
    return;
  }

  printPostOrder(node->left);
  printPostOrder(node->right);

  // display the node value
  cout << node->value << endl;
}

/**
 * @brief
 *
 * the search tree is deepened as much as possible on each child before going to the
 * next sibiling;
 *
 * In DFS , there are three major types:
 * 1. Pre order (node -> left child -> right child)
 * 2. In order (left child -> node -> right child)
 * 3. Post order (left child -> right child -> node)
 *
 */