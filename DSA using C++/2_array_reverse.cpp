
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
    cout<<"Array without Reverse :";
    for(int i = 0;i<size ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nArray reverse using simple loop :";
    for(int i = size-1 ; i>=0 ; i--){
        cout<<arr[i]<<" ";
    }
    int s = 0 ,e = size-1;
    for(int i = s ; i<=e ; i++){
        int temp = arr[i];
        arr[i] = arr[e];
        arr[e] = temp;
        e--;
        s++;
    }
    cout<<endl;
    cout<<"\nArray reverse using Logic :";
    for(int i = 0;i<size ;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
