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

  
};

int main(){
  
  return 0;
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