
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    
  // second largest element in an array 
  int arr[5] = {2,3,5,8,8};
  int largest= arr[0];
  for(int i = 0 ; i < 5 ; i++){
      if(arr[i] > largest){
          largest = arr[i];
      }
  }
  cout<<largest<<endl;
  int secondLargest = arr[0];
  for(int i = 0 ; i < 5 ; i++){
      if(arr[i] >  secondLargest and arr[i] != largest){
          secondLargest = arr[i];
      }
  }
  cout<<secondLargest;
    return 0;
}
