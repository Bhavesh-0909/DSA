#include<iostream>
using namespace std;

int main(){
    int len, bret, i = 1;
    cout<<"enter the length and breath of sqaure";
    cin>>len>>bret;
    while (i<=len)
    {
        int j = 1;
        while (j<=bret){
            if(i==1 || i==len || j==1 || j==bret){
                cout<<"*";
                j++;
            }
            else{
                
                    cout<<" ";
                    j++;
                }
            
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}