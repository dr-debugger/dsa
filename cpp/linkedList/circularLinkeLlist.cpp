#include<iostream>
#include<string>
using namespace std;

class Node{
public:
 int key, val;
 Node *next;

 Node()
 {
   key = val = 0;
   next = nullptr;
  };
  Node(int k, int v){
    key = k;
    val = v;
    next = nullptr;
  }
};

class CircularLinkedList{
  Node *head;
  Node *getLastNode();

public:
  CircularLinkedList(){
    head = nullptr;
  }
    void addNode(int k, int v);
    Node* getNode(int key);
    void displayNodes();
    bool removeNode(int key);
    bool isEmpty(){
      return head == nullptr;
    }
};

Node* CircularLinkedList:: getNode(int key){
  if(isEmpty()){
    return head;
  }
  Node *temp = nullptr;
  Node *ptr = head;

  do
  {
    if(ptr->key == key){
      temp = ptr;
      return temp;
    }

    ptr = ptr->next;

  } while (ptr != head );

  return temp;
}

void CircularLinkedList :: addNode(int k, int v){
    Node *new_node = new Node(k, v);
    if(isEmpty()){
      head = new_node;
      head->next = head;
      return;
    }

    Node* temp = head;

    while(temp->next != head)
    {
      temp = temp->next;
    }

    temp->next = new_node;
    new_node->next = head;
}

void CircularLinkedList :: displayNodes(){
  if(isEmpty()){
      return;
  }

  Node *temp = head;

  do
  {
    if(temp->next == head){
      cout << temp->val << endl;
      return;
    }
    cout << temp->val << endl;
    temp = temp->next;
  } while(temp != head);

}


bool CircularLinkedList :: removeNode(int k){
  if(isEmpty()){
    return false;
  };

  Node *curr = head;

  if(curr->next == head){ // if there is only one node
    head = nullptr;
    delete curr;
    return true;
  }



  Node *prev = curr;
  curr = curr->next;

  while (curr != head)
  {
    if(curr->key == k){
      prev->next = curr->next;
      delete curr;
      return true;
    }
    prev = curr;
    curr = curr->next;
  }

  return false;
}

Node * CircularLinkedList :: getLastNode(){
  if(isEmpty()){
    return nullptr;
  };

  Node *temp = head;
  while (temp->next != head)
  {
    temp = temp->next;
  }

  return temp;
}

int main(){

  CircularLinkedList a;
  a.addNode(1, 10);
  // a.addNode(2, 30);
  // a.addNode(3, 20);

  a.displayNodes();

  cout << "------" << endl;
  cout << a.removeNode(1) << endl;
  a.displayNodes();

  return 0;
}