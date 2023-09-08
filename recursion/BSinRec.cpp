#include<iostream>
using namespace std;

bool bs(int *arr,int s,int e,int k){
    int mid = s+(e-s)/2;
    //base case 
    if(s>e) return false;

    if(arr[mid]==k) return true;
    else if(arr[mid]>k) return bs(arr,s,mid-1,k);
    else return bs(arr,mid+1,e,k);

}

int main(){
    int arr[7] = {1,2,3,44,57,65,111};
    int start = 0;
    int end = 6;
    int key = 23;
    if (bs(arr,start,end,key))
    {
        cout<<"key is found";

    }
    else
    {
        cout<<"key not found";
    }
    
    return 0;
}