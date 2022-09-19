#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
  int n=3;
  vector<string> c(n);
  for(int i=0;i<n;i++){cin>>c[i];}
  for(int i=0;i<n;i++){
    cout << c[i][i];
  }
}
