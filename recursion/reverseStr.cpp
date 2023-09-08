#include<iostream>
using namespace std;

void reverse(string &str,int start) {
    int n = str.size() - start - 1;
    
    //base case 
    if(start>n) return ;


    swap(str[start],str[n]);
    start++;
    reverse(str,start);
    
}

int main(){
    string a = "abcde";
    reverse(a,0);
    cout<<a;

    return 0;
}