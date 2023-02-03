#include<iostream>
#include<string>
using namespace std;

void countingSort(int arr[], int size,int range){
  int *sortedArr = new int[size];
  int *countArr = new int[range];

  for (int i = 0; i < range; i++){
    countArr[i] = 0;
  }

  for (int i = 0; i < size; i++){
    ++countArr[arr[i]];
  }

  for (int i = 1; i < range; i++){
    countArr[i] = countArr[i - 1] + countArr[i];
  }


  for (int i = 0; i < size; i++){
    sortedArr[--countArr[arr[i]]] = arr[i];
  }

 for (int i = 0; i < size; i++){
    arr[i] = sortedArr[i];
  }

  delete[] sortedArr;
  delete[] countArr;
};

void displayArr (int arr[], int n){
  for (int i = 0; i < n; i++)
    cout << arr[i] << endl;
}

int main(){
  int size;
  cout << "Enter the Size of the Array :";

  cin >> size;
  int arr[size];

  cout << "enter Item" << endl;
  for (int i = 0; i < size; i++){
    cin >> arr[i];
  }

  int *sortedArr;

  countingSort(arr, size, 10); // range from 0-9

  cout << "displaying" << endl;
  displayArr(arr, size);
  return 0;
}

/**
 * @brief 
 * Time complexity : O(n+k)
 * Space complexity : O(n+k)
 * n = number of elements
 * k = range of input
 * 
 * 
 * counting sort algorithm, sorts the element of an array by counting the number of ocurences of each  unique element of the array
 * 
 * The count is stored in an auxiliary array and the sorting is done by mapping the count as an index of the auxiliary array. This mapping is done by performing some arithmetic calculations on those counts to determine the positions of each unique element in the output sequence.
 * 
 * it is not a comparison sort.
 * 
 */