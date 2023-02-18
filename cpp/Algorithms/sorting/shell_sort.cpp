#include<iostream>
#include<string>
#include <cmath>
using namespace std;


void shellSort(int arr[], int size){

  for (int gap = floor(size / 2); gap > 0; gap = floor(gap/2))
  {
    for (int j = gap; j < size; j++)
    {
      int temp = arr[j];
      int i = 0;

      for (i = j; i >= gap && arr[i - gap] > temp; i -= gap)
      {
        arr[i] = arr[i - gap];
      }

      arr[i] = temp;
    }
  }
  
}

void displayArr(int arr[], int s){
  for (int i = 0; i < s; i++)
  {
    cout << arr[i] << " ";
  }
  
}


int main(){
   int arr[6] = {4, 11, 8, 90, 5, 20};

   shellSort(arr, 6);
   displayArr(arr, 6);

   return 0;
}

/**
 * @
 * Shell sort is an in-place comparison sort.
 * It is mainly variation of sorting by exchange (bubble-sort) or sorting by insertion (insertion-sort)
 * 
 * Algo:
 * Initialize the gap/interval (here we're taking n/2)
 * compare 2 element at the distance of the gap at every iteration
 * if element at the left is larger than element at the right, perform swap or sifting
 * [swaping or shifting depends on whether you use - bubble sort or insertion sort]
 * if swapping happens then need to compare the "left swapped value" with its "right index value" at the distance of the gap
 * After completing one complete iteration gap will be gap/2 (gap > 0)
 * repeat until complete list is sorted 
 * 
 * 
 * Time Complexity: O(n^2)
 * Space Complexity: O(1) // Auxilary space 
 * 
 */