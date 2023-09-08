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
    int arr[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    int index = search(arr,12,6);
    cout<<"index of key is "<<index<<endl;
  

    return 0;
}