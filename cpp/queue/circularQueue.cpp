#include<iostream>
#include<string>
using namespace std;


class CQueue {
  int rear, front, length;
  int *arr;


  public:
    CQueue(int userNum)
  {
    rear = front = -1;
    length = userNum;
    arr = new int[userNum];
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
      return;
    }

    rear = (rear + 1) % length;
    arr[rear] = val;
  }

  void dequeing(){
    if(isEmpty()){
      cout << "Queue is Empty" << endl;
      return;
    }

    if(front == rear){
      cout << "removed the item " << arr[front] << endl;
      front = rear = -1;
      return;
    }
    cout << "removed the item " << arr[front] << endl;
    front = (front + 1) % length;
  }

  ~CQueue(){
    delete[] arr;
  }


};

int main(){

  CQueue a(6);

  return 0;
}