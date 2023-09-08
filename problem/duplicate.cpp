#include<iostream>
using namespace std;

int duplicate(int arr[],int size){
    int ans = 0;
    for (int i = 0; i < size - 1; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[7] = {1,2,3,4,5,6,3};
    int ans = duplicate(arr, 7);
    cout<< ans;
    
    return 0;
}