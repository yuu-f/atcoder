#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  int sum = a+b+c;
  int ans = sum - max({a,b,c});
  cout << ans << endl;
}
