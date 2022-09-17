#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

long long len(long long x1, long long y1, long long x2, long long y2){
  long long _len;
  _len = abs(x1-x2) + abs(y1-y2);
  return _len;
}

int main(){
  int n,m;
  cin >> n >> m;
  vector<long long> a(n),b(n),c(m),d(m);

  for (int i=0;i<n;i++){
    cin >> a[i] >> b[i];
  }
  for (int j=0;j<m;j++){
    cin >> c[j] >> d[j];
  }

  vector<long long> min(n,1000000000);
  vector<int> min_j(n,0);
  long long _min;

  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
      _min = len(a[i], b[i], c[j], d[j]);
      if (_min<min[i]){
        min[i]=_min;
        min_j[i]=j+1;
      }
    }
  }

  for (int i=0;i<n;i++){
    cout << min_j[i] << endl;
  }
}
