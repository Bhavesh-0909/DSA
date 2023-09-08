#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;
    while (i<=n)
    {
        int j= i;
        int count = 1;
        while (j<=n)
        {
            cout<<count;
            count++;
            j++;
        }
        int k =i-1;
        while (k!=0)
        {
            cout<<"**";
            k--;
        }
        int l = n-i+1;
        while (l!=0)
        {
            cout<<l;
            l--;
        }
        cout<<endl;
        i++;
        
        
    }
    

    return 0;
}