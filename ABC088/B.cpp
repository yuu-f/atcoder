#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main(){
  int n;
  int a;
  vector<int> data;

  cin >> n;
  for (int i=0; i<n; i++){
    cin >> a;
    data.push_back(a);
  }

  sort(data.begin(), data.end(), greater<int>());

  //for (int i=0; i<n; i++){
  //  cout << data[i] << endl;
  //}
  int sum_a=0, sum_b=0;

  for (int i=0; i<n; i++){
    if (i%2==0){
      sum_a = sum_a + data[i];
    }else{
      sum_b = sum_b + data[i];
    }
  }
  
  cout << sum_a-sum_b << endl;
}

