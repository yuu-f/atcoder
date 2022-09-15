#include <iostream>

using namespace std;

int main(){
  int n, y;
  cin >> n >> y;

  int sum=0;
  bool flag=false;

  for (int i=0; i<n+1; i++){
    sum = 0;
    for (int j=0; j<(n-i+1); j++){
      //cout << i << " " << j << " " << (n-i-j) <<endl;
      sum = 10000*i + 5000*j + 1000*(n-i-j);
      if (sum==y){
        flag=true;
        cout << i << " " << j << " " << (n-i-j) << endl;
        return 0;
      }
    }
  }
  if (flag==false){
    cout << -1 << " " << -1 << " " << -1 << endl;
  }

}
