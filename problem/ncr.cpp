#include<iostream>
using namespace std;

int fact(int a){
    
    if (a==1)
    {
        return 1;
    }
    if (a==0)
    {
        return 1;
    }
    
    return a*fact(a-1);
}
int main(){
    int n,r;
    cout<<"entered n and r "<<endl;
    cin>>n>>r;
    int ans;
    ans=(fact(n)/(fact(r)*fact(n-r)));
    cout<<"the answer is "<<ans<<endl;
    return 0;
}