#include<iostream>
using namespace std;
void ascorder(int arr[], int size){
    for (int i = 0; i < size - 1; i++)
    {
       for (int j = i + 1; j < size ; i++)
       {
            if (arr[i]>arr[j])
            {
                cout<<arr[i];
                swap(arr[i],arr[j]);
            }
            
       }
       
    }
    
}

void print(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
} 
int main(){
    int arr[6]={1,2,3,4,5,6};
    ascorder(arr,6);
    print(arr,6);
    
    return 0;
}