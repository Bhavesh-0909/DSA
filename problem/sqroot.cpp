#include <iostream>
using namespace std;

int sqroot(int a){
    int s = 0, e = a,mid = s + (e - s)/2;
    int ans = -1;
    while (s<e)
    {
        int sq=mid*mid;
        if (sq==a){
            return mid;
        }
        else if (sq>a){
            e = mid - 1;
        }
        else{
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

double precision(int temosol, int preci, int a){
    double factor = 1;
    double ans = temosol;
    for (int i = 0; i < preci; i++)
    {
        factor = factor/10;
        for (double j = temosol; j*j <= a; j = j + factor)
        {
           ans = j;
        }
        
    }
    return ans;
}

int main ()
{
    int a, preci;
    cout<<"enter the no. ";
    cin>>a;
    cout<<"enter the precision ";
    cin>>preci;
    int temosol = sqroot(a);
    
    cout<<"the sq root is "<<sqroot(a)<<endl;
    cout<<"the precise sol "<<precision(temosol,preci,a);
    return 0;
}