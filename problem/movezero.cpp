#include<iostream>
#include<vector>
using namespace std;
void zero(vector<int>& arr, int size){
    int i = 0;
    for (int j = 0; j < size; j++)
    {
        if (arr[j]!=0)
        {
            swap(arr[j],arr[i]);
            i++;
        }
        
    }
    
        
    }

void print(vector<int>& arr, int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}


int main(){
   vector<int> arr;

   arr.push_back(1);
   arr.push_back(2);
   arr.push_back(0);
   arr.push_back(0);
   arr.push_back(0);
   arr.push_back(3);
   arr.push_back(4);
   arr.push_back(0);
   int size = arr.size();
   zero(arr,size);
   print(arr,size);
    return 0;
}