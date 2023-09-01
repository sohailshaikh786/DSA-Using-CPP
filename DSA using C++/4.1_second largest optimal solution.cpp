#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    
  // second largest element in an array 
  int arr[5] = {2,3,5,8,8};
  int largest= arr[0];
  int secondLargest = -1;
  
  for(int i = 0 ; i < 5 ; i++){
      if(arr[i] > largest ){
          secondLargest = largest;
          largest = arr[i];
      }
  }
  cout<<largest<<endl;
  cout<<secondLargest;
  
    return 0;
}

