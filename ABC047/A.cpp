#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;

  int _max = max({a,b,c});
  int sum = a+b+c;

  if ((sum/2)==(sum-_max)){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
