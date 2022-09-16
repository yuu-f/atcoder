#include <iostream>

using namespace std;

int main(){
  int k, s;
  cin >> k >> s;
  int x, y, z;
  int ans=0;

  for (int i=0;i<k+1;i++){
    x=i;
    for (int j=0;j<k+1;j++){
      y=j;
      z=s-x-y;
      if (0<=z && z<=k){
        ans+=1;
      }
    }
  }
  cout << ans << endl;
}
