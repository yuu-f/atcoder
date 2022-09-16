#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
  int n, m;
  cin >> n;
  vector<int> t;
  vector<int> p;
  vector<int> x;

  int _t;
  for (int i=0;i<n;i++){
    cin >> _t ;
    t.push_back(_t);
  }

  cin >> m;
  int _p, _x;
  for (int i=0;i<m;i++){
    cin >> _p >> _x;
    p.push_back(_p);
    x.push_back(_x);
  }

  int sum = accumulate(t.begin(), t.end(), 0);
  int ans;
  for (int i=0;i<m;i++){
    if (p[i]<=n){
      ans = sum - (t[p[i]-1]-x[i]);   
      cout << ans << endl;
    }else{
      ans = sum;
      cout << ans << endl;
    }
  }
}
