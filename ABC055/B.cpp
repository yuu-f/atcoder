#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n;
  cin >> n;
  long long power=1;
  long long  x = pow(10,9)+7;

  for (int i=1;i<n+1;i++){
    power *= i;
    power %= x;
    //cout << "i: " << i << ", power: " << power << endl;
  }

  cout << power << endl;
}
