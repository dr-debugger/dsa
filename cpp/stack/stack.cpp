#include<iostream>
#include<string>
using namespace std;

class Stack{
  int top, length;
  int *arr;
  int *dummyArr;

  bool isFull(){
    return top == (length - 1);
  }

  void doubleTheArr(){
    dummyArr = arr;
    arr = new int[length * 2]; // doubling the array length
    for (int i = 0; i < length; i++){
      arr[i] = dummyArr[i];
    }

    length *= 2;
    delete[] dummyArr;
  }

  public:
    Stack(int num){
      /**
       * initializing the stack with no item;
       * we will get length from the user on the creation of object;
       */
      top = -1;
      arr = new int[num];
      length = num;
    }

    // common stack methods
    void diaplayStackItem(void);
    void push(int item);
    void pop();
    bool isEmpty(void);
    int topElem(){
      if(top > -1){
      return arr[top];
      }
      cout << "stack is already empty" << endl;
    }

    ~Stack(){
      cout << "deallocating the memory" << endl;
      delete[] arr;
      delete[] dummyArr;
    }

};

void Stack :: diaplayStackItem(){
  if(top > -1){
      for (int i = 0; i < top + 1; i++){
        cout << arr[i] << endl;
      }
      return;
  }
  cout << "stack is already empty" << endl;
}

void Stack :: push(int item){
  if(isFull() == 1)
      doubleTheArr();
  top++;
  arr[top] = item;
}

void Stack :: pop(){
  if(top > -1){
      top -= 1; // cant completly remove the element , so just pointing top to the second last elem
      return;
  }

 cout << "stack is already empty" << endl;
};

bool Stack::isEmpty(){
  return top < 0;
};

int main(){

  int usernum;
  cout << "How much elemnet you want in your stack:" << endl;

  cin >> usernum;

  Stack a(usernum);

  a.push(10);
  a.push(30);
  a.push(10);
  a.push(17);
  a.push(100);
  a.pop();

  a.diaplayStackItem();
  // if(a.isEmpty() == 1){
  //     cout << "stack empty" << endl;
  // }else{
  //     cout << "not empty" << endl;
  // }

  return 0;
}