#include <iostream>
#include <string>
using namespace std;

int main(){
  string a,b;
  cin >> a >> b;

  int a_len=a.length();
  int b_len=b.length();
  int _a, _b;

  if (a_len<b_len){
    cout << "LESS" << endl;
  }else if(a_len>b_len){
    cout << "GREATER" << endl;
  }else{
    for(int i=0;i<a_len;i++){
      _a=int(a[i]-'0');
      _b=int(b[i]-'0');
      if (_a<_b){
        cout << "LESS" << endl;
        return 0;
      }else if(_a>_b){
        cout << "GREATER" << endl;
        return 0;
      }else{
        continue;
      }
    }
    cout << "EQUAL" << endl;
  }
}
