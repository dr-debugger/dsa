#include<iostream>
#include<string>
using namespace std;

void insertionSort(int arr[], int size){
  if(size == 1)
    return;

  int i, j, val;

  for ( i = 1; i < size; i++)
  {
    val = arr[i]; // storing the value in a temporary variable

    for (j = i - 1; j >= 0 && arr[j] > val; j--) // if the temporary value is the lower
    {
      arr[j + 1] = arr[j];
    }

    arr[j + 1] = val; // till arr[j] values are sorted
  }
}

void displayArr(int arr[], int s){
  for (int i = 0; i < s; i++)
  {
    cout << arr[i] << endl;
  }
  
}

int main(){
  int arr[5] = {10, 11, 8, 3, 5};

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