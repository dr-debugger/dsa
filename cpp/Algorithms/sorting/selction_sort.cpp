#include<iostream>
#include<string>
using namespace std;


void displayArr (int arr[], int n){
  for (int i = 0; i < n; i++)
    cout << arr[i] << endl;

}

void swap(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}

void selectionSort(int arr[], int size){
  int minIndex, i, j;
  for (i = 0; i < size - 1; i++){
    minIndex = i;
    for (j = i + 1; j < size; j++){
      if(arr[j] < arr[minIndex]){
        minIndex = j;
      }
    }
    swap(arr[i], arr[minIndex]);
  }
}


int main(){

  int n;
  cout << "Enter the number of elemnts: " << endl;
  cin >> n;

  int arr[n];

  cout << "enter value one by one and press enter " << endl;

  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  selectionSort(arr, n);
  displayArr(arr, n);

  return 0;
}

/**
 * @brief 
 * its an in place comparison sort, which requires (On^2) time complexity. thats make it unefficient for larger lists.
 * 
 * First divide the input list with two sublists. one sorted and another need to be sorted.
 * Initially the sorted sublist will be empty and unsorted sublist is the entire input list.
 * The algorithm proceed by finding the smallest or the largest (depending on the order) element in the unsorted sublist, exchanging it with the left most unsorted elemnt and moving the sublist boundaries one elemnt to the right.
 * 
 */