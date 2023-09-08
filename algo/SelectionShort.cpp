#include<iostream>
using namespace std;

void selection(int arr[], int size){
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j]<arr[min])
                min = j;
        
        }
        swap(arr[i],arr[min]);
    }
    
}

void printarr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";

    }
    
}

int main(){
    int arr[7] = {4,3,2,33,24,22,1};
    selection(arr,7);
    printarr(arr,7);

    return 0;
}