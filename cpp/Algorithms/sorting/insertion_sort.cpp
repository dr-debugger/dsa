#include<iostream>
#include<string>
using namespace std;

void insertionSort(int arr[], int size){
  if(size == 1)
    return;

    
  int i, j, val;

  for ( i = 1; i < size; i++)
  {
    val = arr[i];

    for (j = i - 1; j >= 0 && arr[j] > val; j--)
    {
      arr[j + 1] = arr[j];
    }

    arr[j + 1] = val;
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

  insertionSort(arr, 5);
  displayArr(arr, 5);

  return 0;
}

/**
 * @brief
 * time complexity O(n^2);
 *
 * starting from left -->
 * pick the second element
 * compare with all elements on the left. [left side will be sorted]
 * shift all the element to the sorted sub-list that is greater (or smaller , depending on the order) than the value to be sorted.
 * insert the value.
 * do it until all elements are sorted.
 *
 */