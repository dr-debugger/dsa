#include<iostream>
#include<string>
using namespace std;

void linearSearch(int num, int a[]){
  int isElemFound = 0;
  for (int i = 0; i < 5; i++){
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
  int arr[5] = {1, 4, 6, 23, 0};
  cout << "Enter the number you wanna search :" << endl;

  cin >> num;

  linearSearch(num, arr);

  return 0;
}