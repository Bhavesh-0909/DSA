#include<iostream>
using namespace std;

int main(){
    int a,b;
    char opt;
    cout<<"enter the two number";
    cin>>a>>b;
    cout<<"enter the opteration to be perform ";
    cin>>opt;
    switch (opt){
        case '+' : cout<<"the addition is = "<<a+b;
            break;
        case '-' : cout<<"the subraction is ="<<a-b;
            break;
        case '*' : cout<<"tthe product is = "<<a*b;
            break;
        default : cout<<"invaild input";       
    }
    
    return 0;
}