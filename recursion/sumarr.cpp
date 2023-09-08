#include<iostream>
using namespace std;

int sumarr(int *arr, int size) {
    //base case
    if(size==1) return arr[0];
    if(size==0) return 0;
    
     int sum = arr[0]+ sumarr(arr+1,size-1);
    // cout << sum<<" "<<arr[0]<<endl;
    return sum; 
}

int main(){
    int arr[5]={1,2,3,4,5};
    int sum = sumarr(arr,5);
    cout<<sum<<endl;
    return 0;
}