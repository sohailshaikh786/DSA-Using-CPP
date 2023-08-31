
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
    int sum = 0;
    for(int i = 0; i < size ; i++){
        sum = sum  + arr[i];
    }
    cout<<"Sum of array is : "<<sum ;
   
    return 0;
}
