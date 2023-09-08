#include<iostream>
using namespace std;

int iseven(int a){
    if (a&1)
    {
        return 1;
    }
    return 0;
}
int main(){
    int a;
    cout<<"ennter the no. ="<<endl;
    cin>>a;
    bool ans=iseven(a);
    if (ans==0)
    {
        cout<<"entered no. is even";
    }
    else{
        cout<<"entered no. is odd";
    }   
    return 0;
}