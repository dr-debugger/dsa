#include<iostream>
#include<string>
#include <cmath>

using namespace std;


void binarySearch(int val, int start, int end, int a[]){

  if(start > end){
    cout << "No elemnt found!" << endl;
    return;
  }

  int mid = floor(((start + end) / 2));

  if(a[mid] == val){
    cout << "element found at position " << a[mid] << endl;
    return;
  }else if(a[mid] < val){
    return binarySearch(val, mid + 1, end, a);
  }else{
    return binarySearch(val, start, mid - 1 , a);
  }

}


int main(){
  int arr[5] = {1, 2, 3, 4, 5};
  int sizeOfArr = (sizeof(arr) / sizeof(arr[0])) - 1;

  binarySearch(85, 0, sizeOfArr, arr);

  return 0;
}

/**
 * @a
 * search a sorted array by repeatedly dividing the search interval by half.
 * Begin with an interval covering whole array.
 * If the value of the search key is less then than the item in the middle of the interval, narrow the interval to the lower half.
 * otherwise narrow it to upper half.
 * repeatedly check if the value is found or the interval is empty.
 * 
 */