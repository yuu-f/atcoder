#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
  int h,w;
  cin >> h >> w;
  string x;

  vector<string> c(h);
  for (int i=0;i<h;i++){
      cin >> x;
      c[i]=x;
  }
  
  for (int i=0;i<h;i++){
    cout << c[i] << endl;
    cout << c[i] << endl;
  }
}
