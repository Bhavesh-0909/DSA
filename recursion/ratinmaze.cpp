//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    private:
    
        bool safe(vector<vector<int>> &m,int n, int x,int y,vector<vector<int>> visted){
            if((x<n && x>=0) && (y<n && y>=0) && m[x][y]==1 && visted[x][y]==0){
                
                return true;
            }
            else{
                return false;
            }
        }
        void solve(vector<vector<int>> &m, int n,vector<string> &ans,vector<vector<int>> visted,string path,int x,int y){
            //base condition
            if(x==n-1 && y==n-1){
                ans.push_back(path);
                return ;
            }
            
            visted[x][y]=1;
            //down
            int newx = x+1;
            int newy = y;
            if(safe(m,n,newx,newy,visted)){
                
                path.push_back('D');
                solve(m,n,ans,visted,path,newx,newy);
                path.pop_back();
            }
            //left
            newx = x;
            newy = y-1;
            if(safe(m,n,newx,newy,visted)){
                
                path.push_back('L');
                solve(m,n,ans,visted,path,newx,newy);
                path.pop_back();
            }
            //up
            newx = x-1;
            newy = y;
            if(safe(m,n,newx,newy,visted)){
                
                path.push_back('U');
                solve(m,n,ans,visted,path,newx,newy);
                path.pop_back();
            }
            //right
            newx = x;
            newy = y+1;
            if(safe(m,n,newx,newy,visted)){

                path.push_back('R');
                solve(m,n,ans,visted,path,newx,newy);
                path.pop_back();
            }
            
            
            
            
            
            
            visted[x][y]=0;
        }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        if(m[0][0]==0) return ans;
        int x = 0, y = 0;
        vector<vector<int>> visted =m;
        string path ="";
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                visted[i][j]=0;
            }
        }
        
        solve(m,n,ans,visted,path,x,y);
        sort(ans.begin(),ans.end());
        
        return ans;
        
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends