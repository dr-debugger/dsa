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

    bool isTreeEmpty(){
      return root == nullptr;
    }
    public:
    Tree(){
      root = nullptr;
    }

    Node* insertNode(int value, Node *r);
};

int main(){
  
  return 0;
}

Node* Tree :: insertNode (int value, Node *r){
  if(isTreeEmpty()){
      return root = new Node(value);
  }

  if(r == nullptr){
    return new Node(value);
  }

  if(value > r->value){
    r->right = insertNode(value, r->right);
  }

  if(value < r->value){
    r->left = insertNode(value, r->left);
  }

  return r;
}

/**
 * @brief
 * AVL tree is a self-balancing Binary Search Tree (BST) where the difference between heights of left and right subtree cannot be more than one, for all nodes;
 * 
 * The rebalancing is done using Rotation of a binary search tree
 * 
 */