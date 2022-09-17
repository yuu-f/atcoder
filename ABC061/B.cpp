#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<int> a(m), b(m);
  
  for (int j=0;j<m;j++){
    cin >> a[j] >> b[j];
  }

  vector<int> ans(n+1,0);

  for (int i=1;i<n+1;i++){
    for (int j=0;j<m;j++){
      if(i==a[j]||i==b[j]){
        ans[i]+=1;
      }
    }
  }
  for (int i=1;i<n+1;i++){
    cout << ans[i] << endl;
  }
}
