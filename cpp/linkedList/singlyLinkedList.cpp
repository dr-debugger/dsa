#include<iostream>
#include<string>
using namespace std;

class Node{
  public:
    int key, data;
    Node *next;

    Node(){
      key = data = 0;
      next = nullptr;
    }

    Node(int k, int d){
      key = k;
      data = d;
      next = nullptr;
    }
};

class SinglyLinkedList{
  Node* head;
  public:
    SinglyLinkedList(){
      head = nullptr;
    }

    void addNode(int val, int key){
      Node *new_Node = new Node(key, val);
      if (head == nullptr)
      {
        head = new_Node;
        return;
      }

    // adding item from front
      new_Node->next = head;
      head = new_Node;
    }

    void removeNode(int key){
      Node *temp = head;
      if(temp != nullptr && temp->key == key){
        cout << "removed at " << key << endl;
        head = temp->next;
        delete temp;
        return;
      }

      Node *prev = head;

      while (temp != nullptr)
      {
        if(temp->key == key){
          cout << "removed at " << key << endl;
          prev->next = temp->next;
          delete temp;
          return;
        }
        prev = temp;
        temp = temp->next;
      }
      delete temp;
      cout << "invalid key" << endl;
    }

    bool serchNodeBykey(int key){
      Node* temp = head;
      while (temp != nullptr)
      {
        if(temp->key == key){
          cout << "node found " << temp->data << endl;
          return true;
        }
        temp = temp->next;
      }
      return false;
    }
   
    void display(){
      Node *temp = head;
      while (temp != nullptr)
      {
        cout << temp->data << endl;
        temp = temp->next;
      }
    }

    ~SinglyLinkedList(){
      delete head;
    }

};

int main(){
    SinglyLinkedList a;
    a.addNode(10, 1);
    a.addNode(80, 2);
    a.addNode(809, 3);
    a.addNode(9, 4);
    a.addNode(95, 5);

    a.display();
    a.serchNodeBykey(3);
    a.removeNode(3);
    a.addNode(950, 6);
    a.display();

    return 0;
}