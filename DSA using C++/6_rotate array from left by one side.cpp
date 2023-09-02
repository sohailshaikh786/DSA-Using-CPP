// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // left rotate array by one place
    int arr[5] = {2,3,4,5,6}; // { 3,4,5,6,2}
  
    int temp = arr[0];
    for(int i = 1 ; i < 5 ; i++){
        arr[i-1] = arr[i];
    }
    arr[4] = temp;
    for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}