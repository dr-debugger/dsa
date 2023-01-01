#include<iostream>
#include<string>
using namespace std;

class Queue{
  int rear, front, length;
  int* arr;

public:
  Queue(int userNum)
  {
    rear = front = -1;
    length = userNum;
    arr = new int[userNum];
  }

  bool isEmpty(){
    return front == -1;
  }

  bool isFull() {
    return rear == (length -1);
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

    rear++;
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
    front++;
  }

  void peek(int pos){
     if(isEmpty()){
      cout << "Queue is Empty" << endl;
      return;
    }

    if(pos <= rear && pos >= front ){
      cout << "item at pos " << pos << " is " << arr[pos] << endl;
      return;
    }

    cout << "no item at the given position" << endl;
  }

  void changeAt(int pos, int val){
     if(isEmpty()){
      cout << "Queue is Empty" << endl;
      return;
    }

     if(pos <= rear && pos >= front ){
      arr[pos] = val;
      return;
    }
    cout << "given position is wrong!" << endl;
  }

  void displayItems(){
    if(isEmpty()){
      cout << "Queue is Empty" << endl;
      return;
    }

    for (int i = front; i <= rear; i++){
      cout << arr[i] << endl;
    }
  }

  ~Queue(){
    delete[] arr;
  }

};

int main(){
  int userNum;
  cout << "enter length of the queue: " << endl;
  cin >> userNum;

  Queue a(userNum);
  a.enqueing(5);
  a.enqueing(6);
  a.enqueing(7);
  a.enqueing(8);
  a.enqueing(9);
  // a.peek(2);
  // a.dequeing();

  // a.displayItems();

  return 0;
}


/**
 * @brief The major drawback in this approch is, when removing item from the queue, most of the portion of the array consuming memory without using it.
 * we can solve this issue by a circular queue implementation
 */