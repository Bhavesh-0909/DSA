#include<iostream>
using namespace std;

void Bubbleshort(int arr[],int size){
    
    for (int i = 0; i < size - 1; i++)
    {
        bool sort = false;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                    swap(arr[j],arr[j+1]);
                    sort = true;
            }
            
        }
        if (sort == false)
        {
           break;
        }
        
    }
    
}

void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
            cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    Bubbleshort(arr,size);
    printArray(arr,size);
    return 0;
}