#include<iostream>
using namespace std;

bool palin(string &str, int start, int end) {
    cout<<start<<" "<<end<<endl;
    //base case
    if(start>=end) return true;

    if(str[start]!=str[end]) return false;

    start++;
    end--;
    return palin(str,start,end);
    

}

int main(){
    string a = "aabbcbbaa";
    int start = 0;
    int end = a.size()-1;
    if(palin(a,start,end)){
        cout<<"it is palindrome";

    }
    else{
        cout<<"it is not a palindrome";

    }
    return 0;
}