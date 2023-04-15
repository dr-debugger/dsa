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
    Node* getRoot(){ // getter
      return root;
    }

    Node *insertNode(Node *r, int val);
};

int main(){

    Tree AVL;
    AVL.insertNode(AVL.getRoot(), 40);

    return 0;
}

Node* Tree :: insertNode(Node* r, int val){
  if(isTreeEmpty()){
    return root = new Node(val);
  }
  if(r == nullptr){
      Node *node = new Node(val);
      r = node;
      return r;
  }

  if(val < r->value){
      r->left = insertNode(r->left, val);
  }else if(val > r->value){
      r->right = insertNode(r->right, val);
  }else{
      return r;
  }
  return r;
};

/**
 * @brief
 * AVL tree is a self-balancing Binary Search Tree (BST) where the difference between heights of left and right subtree cannot be more than one, for all nodes;
 * 
 * The rebalancing is done using Rotation of a binary search tree
 * 
 * 
 * The balance factor of a binary tree is: 
 * Height of left sub-tree - Height of right sub-tree {which have to be in range of -1, 0, 1}
 * 
 * 
 */