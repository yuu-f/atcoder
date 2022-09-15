#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(){
  int n, d;
  vector<int> data;

  cin >> n;
  for (int i=0; i<n; i++){
    cin >> d;
    data.push_back(d);
  }
  
  //cout << data.size() << endl;

  sort(data.begin(), data.end());
  data.erase(unique(data.begin(), data.end()), data.end());

  cout << data.size() << endl;
}
