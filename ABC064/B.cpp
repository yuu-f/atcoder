#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++){cin>>a[i];}

  int max=*max_element(a.begin(),a.end());
  int min=*min_element(a.begin(),a.end());

  cout << max-min << endl;
}
