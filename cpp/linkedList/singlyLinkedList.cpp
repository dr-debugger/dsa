#include<iostream>
#include<string>
using namespace std;

class Node{
  public:
    int key, data;
    Node *next;

    Node(){
      key = data = 0;
      next = NULL;
    }

    Node(int k, int d){
      key = k;
      data = d;
      next = NULL;
    }
};

class singlyLinkedList{
  Node* head;
  public:
    singlyLinkedList(): head(nullptr){};

    void addNode(){

    }


};

int main(){
    Node a(1, 10);
    Node b(2, 20);
    return 0;
}