#include<iostream>
using namespace std;
int sum(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
 
int main(){
    int arr[6]={1,2,3,4,5,6};
    int Sum = sum(arr, 6);
    cout<<"sum of all the element in array = "<<Sum<<endl;
    

    return 0;
}