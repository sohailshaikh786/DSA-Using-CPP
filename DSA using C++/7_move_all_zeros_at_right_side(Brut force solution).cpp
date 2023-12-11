
#include <iostream>
using namespace std;

void moveToRight(int arr[] , int size){
    int temp[size];
    int tempindex = size - 1;
    for(int i = 0 ;i < size ; i++){
        if(arr[i] != 0){
            temp[tempindex] = arr[i];
            tempindex--;
        }
    }
    while(tempindex >=0 ){
        temp[tempindex] = 0;
        tempindex--;
    }
    for (int i = size; i >= 0; i--) {
        arr[i] = temp[tempindex];
        tempindex++;
    }
    
}

int main() {
    int arr[] = {1, 0, 3, 0, 0, 2, 4, 0, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    moveToRight(arr, size);
    for(int i = 0; i <size ;i ++){
        cout<<arr[i] <<" "<<endl;
    }
    
    return 0;
}
