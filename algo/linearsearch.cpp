#include<iostream>
using namespace std;
int search(int arr[], int size, int key){
    for (int  i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
        
    }
    return -1;
}
 
int main(){
    int arr[6]={1,2,3,4,5,6};
    int index = search(arr,6,6);
    cout<<"index of key is "<<index;

    return 0;
}