#include <iostream>
using namespace std;

int main(){
  int n,a;
  cin >> n >> a;
  if (n*n<=a){
    cout << 0 << endl;
  }else{
    cout << n*n-a << endl;
  }
}
