#include<iostream>
#include<string>
using namespace std;

void linearSearch(int num, int a[], int arrSize){
  int isElemFound = 0;
  for (int i = 0; i < arrSize; i++){
    if(a[i] == num){
      cout << "Element found on position " << i+1 << endl;
      isElemFound = 1;
    }
  }
  if(!isElemFound){
    cout << "No Element found" << endl;
  }
};

int main(){
  int num;
  int arrSize;
  cout << "Enter the size of the array :" << endl;
  cin >> arrSize;
  int arr[arrSize];
  cout << "Enter the" << arrSize << " element(s)" << endl;

  for (int i = 0; i < arrSize; i++){
    cin >> arr[i];
  }

  cout << "Enter the number you wanna search :" << endl;

  cin >> num;

  linearSearch(num, arr, arrSize);

  return 0;
}