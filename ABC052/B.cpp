#include <iostream>
#include <string>

using namespace std;

int main(){
  int n;
  string s;
  cin >> n >> s;
  
  int x=0;
  int x_max=0;

  for (int i=0;i<s.length();i++){
    if (s.at(i)=='I'){
      x+=1;
    }else{
      x-=1;
    }
    if (x_max<x){
      x_max=x;
    }
  }
  cout << x_max << endl;
}
