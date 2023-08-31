#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    
    int size;
    cout<<"Enter size of array :";
    cin>>size;
    int arr[size] ;
    for(int i=0; i<size;i++){
        cout<<"Enter Element of array:";
        cin>>arr[i];
    }
    int min =arr[1];
    int max = arr[1];
    for(int j =0 ; j<size; j++){
        if(arr[j] < min){
            min = arr[j];
        }
        if(arr[j] > max){
            max = arr[j];
        }
    }
    cout<<"Minimum is : "<<min<<"\nMaximum is :"<<max;
    
    
    return 0;
}