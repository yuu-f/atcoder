#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<string> a, b;
  
  string _a, _b;
  for (int i=0;i<n;i++){
    cin >> _a;
    a.push_back(_a);
  }
  for (int j=0;j<m;j++){
    cin >> _b;
    b.push_back(_b);
  }

  int pos_b;
  string sub_a;
  bool flag=false;
  for (int i=0;i<n-m+1;i++){
    pos_b=a[i].find(b[0]);
    //cout << "i: " << i << ", pos_b: " << pos_b << endl;
    if (pos_b==string::npos){
      //cout << "pos_b: " << pos_b << endl;
      continue;
    }else{
      for (int j=0;j<m;j++){
        sub_a = a[i+j].substr(pos_b, m);
        //cout << "i: " << i << ", j: " << j  << ", sub_a: " << sub_a << endl;
        if (b[j]==sub_a){
          flag=true;
        }else{
          flag=false;
          break;
        }
      }
      if (flag==true){
        break;
      }
    }
  }

  if (flag==true){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
        
}
