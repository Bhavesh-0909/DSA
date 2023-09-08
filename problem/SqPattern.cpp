#include<iostream>
using namespace std;

int main(){
    int side, i = 1;
    cout<<"enter the side of sqaure";
    cin>>side;
    while (i<=side)
    {
        int j = 1;
        while (j<=side){
            if(i==1 || i==side){
                cout<<"*";
                j++;
            }
            else{
                if(j==1 || j==side){
                    cout<<"*";
                    j++;
                }
                else{
                    cout<<" ";
                    j++;
                }
            }
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}