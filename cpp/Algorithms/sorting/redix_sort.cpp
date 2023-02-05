#include<iostream>
#include<string>
using namespace std;


int getMax(int arr[], int size){
  int max = arr[0];
  for (int i = 1; i < size; i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }

  return max;
}

void countingSort(int arr[], int size, int div){
  // main sorting will happen here
  int range = 10; // the size of range in a decimal system is 10 (0 - 9)
  int *sortedArr = new int[size];
  int *countArr = new int[range]; 

   for (int i = 0; i < range; i++){
    countArr[i] = 0;
  }

  for (int i = 0; i < size; i++){
    countArr[(arr[i] / div) % 10]++;
  }

  for (int i = 1; i < range; i++){
    countArr[i] += countArr[i - 1];
  }

  for (int i = size - 1; i >= 0; i--){
    sortedArr[--countArr[(arr[i] / div) % 10]] = arr[i];
  }

  for (int i = 0; i < size; i++){
    arr[i] = sortedArr[i];
  }

 
  delete[] sortedArr;
  delete[] countArr;
}

void redixSort(int arr[], int size){
  int max = getMax(arr, size);


  // here div = number of digit in the max element
  for (int div = 1; max/div > 0; div *= 10)
  {
    countingSort(arr, size, div);
  }
  
}

void displayArr (int arr[], int n){
  for (int i = 0; i < n; i++)
    cout << arr[i] << endl;

}

int main(){
  int arr[8] = {170, 45, 75, 90, 802, 24, 2, 66};

  redixSort(arr, 8);

  displayArr(arr, 8);
  return 0;
}

/**
 * @brief
 *
 * Time complexity : O(d(n+k)) // d = maximum number of digit, k = input range (for decimal system k = 10), n = length of the array
 * Space complexity : O(n+k)
 *
 *
 * its an non-comparative sorting algorithm.
 * It vaoids comparison by creating and distributing elements into buckets accorsing to their redix
 * Typically redix sort uses counting sort as a subroutine to sort.
 * 
 * 
 * working flow :
 * 1. Take input array and find thew MAX number
 * 2.  Define 10 queues each representing a bucket for each digit from 0-9
 * 3. Consider the least significant digit of each number in the list which to be sorted
 * 4. Insert each number into their respective queue based on the least significant digit
 * 5. Group all numbers from the queue 0 to queue 9 in the order they have inserted into their respective queuues
 * 6. Repeat from step 3 based on the next last significant digit
 * 7. Repeat form step 2 until the numbers are grouped based on the most significant digit
 */