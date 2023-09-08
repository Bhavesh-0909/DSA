#include<iostream>
#include<vector>
using namespace std;

void set(vector<int>a,int i,vector<int> out, vector<vector<int>> &ans){
    //base case 
    if (i>=a.size())
    {
        ans.push_back(out);
        return;
    }

    //exclude
    set(a,i+1,out,ans);

    //include
    int element = a[i];
    out.push_back(element);
    set(a,i+1,out,ans);

    
}

vector<vector<int>> subset(vector<int> &a){
    int i= 0;
    vector<int> out;
    vector<vector<int>> ans;
    set(a,i,out,ans);
    return ans;
    
}

int main(){
    vector<int> a {1,2,3};

    vector<vector<int>> p = subset(a);
    
    for (int i = 0; i < p.size(); i++)
    {
       for(int j = 0; j<p[i].size() ;j++){
        cout<<p[i][j]<<" ";

       }
       cout<<endl;

    }
    
    return 0;
}