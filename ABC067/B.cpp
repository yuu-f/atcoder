#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  vector<int> l(n);
  for(int i=0;i<n;i++){cin>>l[i];}

  int max,max_i;
  int sum=0;

  for(int i=0;i<k;i++){
    auto max_it=max_element(l.begin(),l.end());
    max=*max_it;
    max_i=distance(l.begin(), max_it);
    sum+=max;
    l[max_i]=0;
  }
  cout << sum << endl;
}
