#include<iostream>
#include<string>
#include <cmath>
using namespace std;

void mergeValue(int arr[], int left, int middle, int right){
  int leftIndex = left, rightIndex = middle + 1, tempArrIndex = left;
  int *temp = new int[right];

  while (leftIndex <= middle && rightIndex <= right){
    // we are performing ascn order
    if(arr[leftIndex] <= arr[rightIndex]){
      temp[tempArrIndex] = arr[leftIndex];
      leftIndex++;
      tempArrIndex++;
      continue;
    }

    temp[tempArrIndex] = arr[rightIndex];
    rightIndex++;
    tempArrIndex++;
  }

  // if any item left in any sublist
  while (leftIndex <= middle)
  {
    temp[tempArrIndex] = arr[leftIndex];
    leftIndex++;
    tempArrIndex++;
  }
  while (rightIndex <= right)
  {
    temp[tempArrIndex] = arr[rightIndex];
    rightIndex++;
    tempArrIndex++;
  }

  // update the actual array, array passed by reference in c++
  for(int i = left; i <= right; i++){
    arr[i] = temp[i];
  }

  delete[] temp;
}

void mergeSort(int arr[], int left, int right){
  if(left < right){
    int middle = floor((left + right) / 2);
    mergeSort(arr, left, middle);
    mergeSort(arr, middle + 1, right);
    mergeValue(arr, left, middle, right);
  };
};


void displayArr(int arr[], int s){
  for (int i = 0; i < s; i++)
  {
    cout << arr[i] << endl;
  }
  
}

int main(){
  int arr[5] = {4, 11, 8, 3, 5};
  mergeSort(arr, 0, 4);
  displayArr(arr, 5);
  return 0;
}

/**
 * Merge sort is a divide and conquer algorithm.
 * Time complexity O(nlog(n))
 * 
 * 
 * Declare left variable to 0 and right variable to n-1 
 * Find mid by medium formula. mid = (left+right)/2
 * Call merge sort on (left,mid)
 * Call merge sort on (mid+1,rear)
 * Continue till left is less than right
 * Then call merge function to perform merge sort.
 * 
 */