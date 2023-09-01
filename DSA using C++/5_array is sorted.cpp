
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    
  // program to find array is sorted or not
  int arr[5] = {2,13,14,15,16}; 
  bool check = 0;
  for(int i =0 ; i < 5 ; i++){
      if(arr[i] <= arr[i+1]){
          check = 1;
      }else{
          cout<<"unsorted";
          check=0;
          break;
        }
    }
  if(check==1){
      cout<<"sorted";
    }
    return 0;
}

