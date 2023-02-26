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

    
};

int main(){
  
  return 0;
}


/**
 * @brief
 * AVL tree is a self-balancing Binary Search Tree (BST) where the difference between heights of left and right subtree cannot be more than one, for all nodes;
 * 
 * The rebalancing is done using Rotation of a binary search tree
 * 
 * 
 * The balance factor of a binary tree is: 
 * Height of left sub-tree - Height of right sub-tree {which have to be in range od -1, 0, 1}
 * 
 * 
 */