#include<iostream>
using namespace std;

int uniqueElement(int arr[],int size){
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
        
        
    }
    return ans;
}

int main(){
    int arr[7] = {1,2,4,1,3,4,2};
    int ans = uniqueElement(arr, 7);
    cout<<ans<<endl;
    return 0;
}