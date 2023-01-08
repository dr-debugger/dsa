#include<iostream>
#include<string>
using namespace std;

class Node{
public:
 int key, val;
  Node *next;
  Node *prev;
  Node()
  {
    key = val = 0;
    next = nullptr;
    prev = nullptr;
  }
  Node(int k, int v){
    key = k;
    val = v;
    next = nullptr;
    prev = nullptr;
  }
};

class DoublyLinkedList{
    Node *head;
    Node *prev;

  public:
  DoublyLinkedList(){
      head = nullptr;
      prev = nullptr;
  }
  void addNode(int k, int v);
  void removeNode();
  void removeNode(int pos);
  void display();
  void checkIfDoubly();
  bool checkEmpty(){
      return head == nullptr;
  }
};

void DoublyLinkedList:: addNode(int k, int v){
  Node *new_node = new Node(k, v);

  // if its the first node;
  if(head == nullptr){
      head = new_node;
      prev = nullptr;
      return;
  }


  // if not , then adding node in the end
  Node *temp = head;
  while (true)
  {
    if(temp->next == nullptr){
      new_node->prev = temp;
      temp->next = new_node;
      return;
    }

    temp = temp->next;
  }
  
}

void DoublyLinkedList:: display(){
  if(checkEmpty()){
    cout << "list is empty" << endl;
    return;
  }

  Node *temp = head;
  while (temp != nullptr)
  {
   cout <<"Node at "<< temp->key<< " is "<< temp->val << endl;
   temp = temp->next;
  }

  delete temp;

  cout << "display ended ****" << endl;
}

void DoublyLinkedList :: removeNode(){
   if(checkEmpty()){
    cout << "list is empty" << endl;
    return;
  }
  
  // remove node from end;
  Node *temp = head;
  Node *temp_prev = head;

  while (true)
  {
    if(temp->next == nullptr){
      temp_prev->next = nullptr;
      delete temp;
      return;
    }

    temp_prev = temp;
    temp = temp->next;
  }
  
}
void DoublyLinkedList :: removeNode(int pos){
   if(checkEmpty()){
    cout << "list is empty" << endl;
    return;
  }

  // remove node at given position
  Node *temp = head;
  Node *temp_prev = head;

  while (temp != nullptr)
  {
    if(temp->key == pos){
      temp->next->prev = temp_prev;
      temp_prev->next = temp->next;
      delete temp;
      return;
    }

    temp_prev = temp;
    temp = temp->next;
  }

  cout << "invalid position" << endl;
  delete temp;
}

void DoublyLinkedList:: checkIfDoubly(){
   if(checkEmpty()){
    cout << "list is empty" << endl;
    return;
  }

  Node *last = head;
  while (last -> next != nullptr)
  {
    last = last->next;
  }

  // printing backwards

  while (last != nullptr)
  {
    cout << last->val << endl;
    last = last->prev;
  }
  
  
}

int main(){
  DoublyLinkedList a;
  a.addNode(1, 10);
  a.addNode(2, 20);
  a.addNode(3, 30);

  // a.display();

  // a.removeNode();

  a.addNode(4, 40);
  a.addNode(5, 50);

  // a.removeNode(3);

  a.display();

  // a.checkIfDoubly();
  return 0;
}