#include<iostream>
#include<string>
using namespace std;


void swap(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}

int partition(int arr[], int start, int end){
  int pivot = arr[end]; // other values of the list will be compared to this
  int pivotIndex = start;


  // loop through a potion of the given array at a time
  for (int i = start; i < end; i++){
    if(arr[i] <= arr[end]){
      swap(arr[i], arr[pivotIndex]);
      pivotIndex++;
    }
  }
  
  // always make "pivotIndex value" = "the value" to which other elements are compared
  swap(arr[pivotIndex], arr[end]);
  return pivotIndex;
}

void quickSort(int arr[], int start, int end){
  if(start < end){
    int pivot = partition(arr, start, end);
    quickSort(arr, start, pivot - 1);
    quickSort(arr, pivot + 1, end);
  }
}

void displayArr(int arr[], int s){
  for (int i = 0; i < s; i++)
  {
    cout << arr[i] << endl;
  }
  
}

int main(){
  int arr[5] = {11, 10, 3, 2, 5};
  quickSort(arr, 0, 4);
  displayArr(arr, 5);
  return 0;
}

/**
 * time complexity O((nlog(n)))
 * space complexity O(logn)
 * 
 * Quick sort is considered as an in-place sorting algorithms. It reduces the space complexity and removes the use of auxiliary array, that is used in  merge sort. 
 * 
 * 
 * flows: 
 * It picks an element as pivot and partitions the given array around the picked pivot.
 */