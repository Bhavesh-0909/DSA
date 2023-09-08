#include<iostream>
using namespace std;

int max(int arr[],int size){
    int max= INT8_MIN; 
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max)
        {
           max = arr[i];
        }
        
    }
    return max;
}

int min(int arr[], int size){
    int min = INT8_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }
        
    }
    return min;
}


int main(){
    int arr[5]={2,23,22,3,1};
    int maximum = max(arr,5);
    int minimum = min(arr,5);
    cout<<"maximum = "<<maximum<<endl;
    cout<<"minimum = "<<minimum<<endl;

    return 0;
}