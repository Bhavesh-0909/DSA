#include<iostream>
using namespace std;

int poistion(int arr[],int s,int e){

    int p = arr[s];
    
    int cnt = 0;
    for (int i = s+1; i <=e; i++)
    {
        if(arr[i]<p) cnt++;

    }

    int idx = s + cnt;
    swap(arr[idx],arr[s]);
    int i = s, j = e;
    while(i<idx && j>idx){
        while(arr[i]<arr[idx]){
            i++;
        }
        while (arr[j]>arr[idx])
        {
            j--;
        }
        if(i<idx && j>idx) swap(arr[i],arr[j]);
        
    }

    return idx;
    

}

void quicksort(int arr[], int s, int e){
    //base case
    if(s>=e) return ;

    //right poistion of the element
    int p = poistion(arr,s,e);
 
    quicksort(arr, s, p - 1);
    quicksort(arr, p + 1,e);
}


int main(){
    int arr[7]={10,70,50,20,30,60,40};
    int s = 0;
    int e = 6;
    quicksort(arr,s,e);
    for (int i = 0; i <=e; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    return 0;
}