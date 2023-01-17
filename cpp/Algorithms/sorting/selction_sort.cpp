#include<iostream>
#include<string>
using namespace std;

int main(){
  
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