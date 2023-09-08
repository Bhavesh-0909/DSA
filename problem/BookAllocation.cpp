#include<iostream>
using namespace std;

bool isPossible(int arr[],int mid, int size, int m){
    int stucount = 1;
    int pagesum = 0;

    for (int i = 0; i < size; i++)
    {
        if (pagesum+=arr[i]<=mid)
        {
            pagesum += arr[i];

        }
        else{
            stucount++;
            if (stucount >= m || arr[i]>mid)
            {
                return false;

            }
            pagesum = arr[i];    
        }    
        
    }
    return true;
}



int binarysearch(int arr[],int size, int m){
    int s =0;
    int sum = 0;
    int ans = -1;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        if (isPossible(arr,mid,size,m))
        {
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int arr[4]={10,20,30,40};
    int m = 2;
    cout << "the minimum of maximum is "<<binarysearch(arr,4,m);
    return 0;
}