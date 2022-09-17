#include <iostream>
#include <string>
using namespace std;

int main(){
  string o,e;
  cin >> o >> e;

  string ans="";
  int o_len = o.length();
  int e_len = e.length();
  for (int i=0;i<o_len;i++){
    if (i==o_len-1&&o_len-e_len!=0){
      ans += o[i];
    }else{
      ans += o[i];
      ans += e[i];
    }
  }
  cout << ans << endl;
}

