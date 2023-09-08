#include<iostream>
using namespace std;

int main(){
    int a=0 ,b=1,n;
    cout<<"enter the no. =\t ";
    cin>>n;
    bool istrue=1;
    for (int i = 2; i <n; i++)
    {
        if (n%i==0){
            istrue=0;
            break;
        }
    }
    if (istrue==0)
    {
        cout<<"enterd no. is not Prime ";
    }
    else
    {
        cout<<"ENterd no. is prime";
    }
    
        
    return 0;
}