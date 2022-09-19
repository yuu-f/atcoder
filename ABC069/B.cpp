#include <iostream>
#include <string>

using namespace std;

int main(){
  string s;
  cin>>s;
  int len = s.size();
  string ans="";

  ans = s[0]+to_string(len-2)+s[len-1];
  cout << ans << endl;
}
