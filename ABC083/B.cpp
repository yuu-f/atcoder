#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>

using namespace std;

int main(){
  int n, a, b;
  cin >> n >> a >> b;

  int len=0;
  int sum;
  int x;
  vector<int> data;
  
  for (int i=1; i<n+1; i++){
    x=i;
    sum=0;
    len = floor(log10(x))+1;
    for (int j=0; j<len; j++){
      sum = sum + x%10;
      x = floor(x/10);
    }
    data.push_back(sum);
  }

  //for (int i=0; i<n; i++){
  //  cout << data[i] << endl;
  //}

  int sum_all=0;
  for (int i=0; i<n; i++){
    if ((a <= data[i]) && (data[i]<=b)){
      sum_all += i+1;
    }
  }

  cout << sum_all <<endl;

}
