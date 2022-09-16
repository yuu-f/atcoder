#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  cin >> s;

  string ans="";
  for (int i=0;i<s.length();i++){
    if (s[i]=='B'){
      if(0<ans.length()){
        ans.pop_back();
      }
    }else{
      ans+=s[i];
    }
  }
  cout << ans << endl;

}
