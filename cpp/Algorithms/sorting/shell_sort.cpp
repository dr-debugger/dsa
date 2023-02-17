#include<iostream>
#include<string>
#include <cmath>
using namespace std;

void swap(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}

void shellSort(int arr[], int size){
  // initial gap
  int gap = floor(size / 2);
  for (int i = gap; i > 0; i /= 2)
  {
    
  }
  
}


int main(){
  
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