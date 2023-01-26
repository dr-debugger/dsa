#include<iostream>
#include<string>
using namespace std;


void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}


// normal bubble sort
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

// optimized algorithm
/**
 * @brief
 * n = length of array/list;
 * The whole list is divided into two sublist, [0 to (n-i-1)] indexes are unsorted and after (n-i-1) index , the sublist is sorted.
 *
 * if flag is false then , it clears that no swapping happened in the whole array, as j starting from 0.
 *
 */
void optimizedBubbleSort(int arr[], int size){
  int i, j;
  bool flag;

  for ( i = 0; i < size; i++){

    flag = false;

    for ( j = 0; j < size -i -1; j++){
      if(arr[j] >  arr[j+1]){
        flag = true;
        swap(&arr[j], &arr[j + 1]);
      }
    }

    if(flag == false){
      break;
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
  optimizedBubbleSort(arr, 5);
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
 * 
 * complexity : O(n^2)
 */