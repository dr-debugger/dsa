#include<iostream>
#include<string>
using namespace std;


void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int arr[], int size){
  int i, j;
  for ( i = 0; i < size; i++)
  {
    for ( j = 0; j < size -i -1; j++)
    {
      if(arr[j] >  arr[j+1]){
        swap(&arr[j], &arr[j + 1]);
      }
    }
    
  }
  
}

void displayArr(int arr[], int s){
  for (int i = 0; i < s; i++)
  {
    cout << arr[i] << endl;
  }
  
}

int main(){
  int arr[5] = {4, 11, 8, 9, 5};
  bubbleSort(arr, 5);
  displayArr(arr, 5);
  return 0;
}


/**
 * @brief 
 * it is known as bubble sort cause with every complete iteration , the largest index bubbles up towards the last index.
 * 
 * algo : -
 * starting with the first element , compare it with the next element of the array.
 * if the current element is greater than the next element of the array swap them.
 * if not , move to the next element.
 * repeat from step one, until the array / list is sorted
 */