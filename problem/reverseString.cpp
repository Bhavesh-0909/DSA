#include<iostream>
using namespace std;

bool reverse(string str){
  bool ans = 0;
  for (int i = 0; i <= str.length()/2;)
  {
    if(str[i]== str[str.length()-i-1]){
      ans = 1;
    }
    i++;
  }
  return ans;

}

int main(){
  string str = "level";
   bool ans = reverse(str);
   cout<<ans;
  return 0;
}