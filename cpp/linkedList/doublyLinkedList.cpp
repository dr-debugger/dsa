#include<iostream>
#include<string>
using namespace std;

class Node{
  int key, val;
  Node *next;
  Node *prev;

public:
  Node()
  {
    key = val = 0;
    next = nullptr;
    }
    Node(int k, int v){
      key = k;
      val = v;
      next = nullptr;
    }
};

int main(){
  
  return 0;
}