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
 * Here tree will be traversed in level-order, where we visit every node on a
 * level before going to a lower level;
 * 
 */