#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
  int h,w;
  cin >> h >> w;
  vector<string> a(h+2,"");
  
  for(int i=0;i<w+2;i++){
    a[0] += '#';
    a[h+2-1] += '#';
  }
  
  string _x;
  for(int i=1;i<h+2-1;i++){
    a[i] += '#';
    cin >> _x;
    a[i] += _x;
    a[i] += '#';
  }

  for(int i=0;i<h+2;i++){
    cout << a[i] << endl;
  }

}
