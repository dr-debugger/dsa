#include<iostream>
#include<string>
using namespace std;

#define SPACE 5

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
  void printLevelOrder(Node *n, int level);

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
  void print_2D_tree_on_terminal(Node *n, int space);
  int getHeight(Node *node);
  void breadthFirst(Node *node);
};

int main(){
  Tree tree;
  tree.addNode(100);
  tree.addNode(80);
  tree.addNode(30);
  tree.addNode(90);
  tree.addNode(20);

  // tree.print_2D_tree_on_terminal(tree.getRoot(), 5);
  tree.breadthFirst(tree.getRoot());

  return 0;
}


void Tree::addNode(int value){
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


void Tree:: print_2D_tree_on_terminal(Node *n, int space){
  if(n == nullptr){
    return;
  }

  space += SPACE;

  print_2D_tree_on_terminal(n->right, space);

  cout << endl;

  for (int i = SPACE; i < space; i++)
  {
    cout << " ";
  }

  cout << n->value << endl;
  print_2D_tree_on_terminal(n->left, space);
}

int Tree :: getHeight(Node *node)
{
   if (node == nullptr)
        return 0;
  else {
       
    int lheight = getHeight(node->left);
    int rheight = getHeight(node->right);
 
  
    if (lheight > rheight) {
      return (lheight + 1);
    }
      
     return (rheight + 1); 
  }
}

void Tree :: printLevelOrder(Node *node, int level){
  if (node == nullptr) return;

  if (level == 1) cout << node->value << " ";

  else if (level > 1) {
      printLevelOrder(node->left, level - 1);
      printLevelOrder(node->right, level - 1);
  }
}

void Tree:: breadthFirst(Node *node){
  int height = getHeight(node);
  int i;
  for (i = 1; i <= height; i++) printLevelOrder(node, i);
} 

/**
 * @brief
 * Here tree will be traversed in level-order, where we visit every node on a
 * level before going to a lower level;
 * 
 */