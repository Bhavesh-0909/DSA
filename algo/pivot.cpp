#include<iostream>
using namespace std;

int search(int arr[], int size, int key){
    int start=0, end=size-1;
    int mid = start + (end - start)/2;
    
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else {
            end = mid + 1;
        }
        mid = start + (end - start)/2;
  
        
    }
    return -1;
}    
int main(){
    int arr[7]={7,9,1,2,3,4,5};
    cout << search(arr,7,7);
    return 0;
}