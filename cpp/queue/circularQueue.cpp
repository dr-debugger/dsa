#include<iostream>
#include<string>
using namespace std;


class CQueue {
  int rear, front, length;
  int *arr;
  int itemCount;

public:
  CQueue(int userNum)
  {
    rear = front = -1;
    length = userNum;
    arr = new int[userNum];
    itemCount = 0;
  }

  bool isEmpty(){
    return front == -1 && rear == -1;
  }

  bool isFull() {
    return (rear + 1 % length) == front;
  }

  void enqueing(int val){
    if(isFull()){
      cout << "Queue is full" << endl;
      return;
    }

    if(isEmpty()){
      front = rear = 0;
      arr[0] = val;
      itemCount++;
      return;
    }

    rear = (rear + 1) % length;
    arr[rear] = val;
    itemCount++;
  }

  void dequeing(){
    if(isEmpty()){
      cout << "Queue is Empty" << endl;
      return;
    }

    if(front == rear){
      cout << "removed the item " << arr[front] << endl;
      front = rear = -1;
      itemCount--;
      return;
    }
    cout << "removed the item " << arr[front] << endl;
    front = (front + 1) % length;
    itemCount--;
  }

  int count (){
    return itemCount;
  }

  void display(){
    if(isEmpty()){
       cout << "Queue is Empty" << endl;
      return;
    }

    for (int i = front; i != rear; (i + 1)% length){
      cout << arr[i] << endl; // printing front to second last elemnt to rear
    };

    cout << arr[rear] << endl; // printing last element
  }

  ~CQueue(){
    delete[] arr;
  }


};

int main(){

  CQueue a(6);

  return 0;
}