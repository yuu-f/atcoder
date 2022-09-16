#include <iostream>

using namespace std;

int main(){
  int n, k, x, y;
  cin >> n >> k >> x >> y;

  int ans=0;
  if (0<(n-k)){
    ans += x*k;
    ans += (n-k)*y;
    cout << ans << endl;
  }else{
    ans = x*n;
    cout << ans << endl;
  }
}
