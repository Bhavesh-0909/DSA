#include<iostream>
using namespace std;

int search(int arr[], int size, int key){
    int start=0, end=size-1;
    int mid = start + (end - start)/2;
    
    while (start<=end)
    {
        if ( arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
        {
            return mid;
        }
        else if (arr[mid]<arr[mid+1] && arr[mid]>arr[mid-1])
        {
            start = mid + 1;
        }
        else if (arr[mid]>arr[mid+1] && arr[mid]< arr[mid-1])
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
  
        
    }
    
    return -1;
}
 

int main(){
    int arr[12]={1,2,3,4,5,6,5,4,3,2,1,0};
    
    cout<<"peak of array is at index =  "<<search(arr,12,6)<<endl;
    cout<<"And the element is  =  "<<arr[search(arr,12,6)]<<endl;

    return 0;
}