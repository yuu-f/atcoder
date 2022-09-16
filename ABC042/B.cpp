#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(string & s1, string & s2){
  return s1 < s2;
}

int main(){
  int n, l;
  cin >> n >> l;
  vector<string> data;

  string a;

  for (int i=0;i<n;i++){
    cin >> a;
    data.push_back(a);
  }

  sort(begin(data), end(data), compare);
  for (int i=0;i<n;i++){
    cout << data[i];
  } 

}
