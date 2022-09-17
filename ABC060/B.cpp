#include <iostream>
#include <numeric>

using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  
  int l = lcm(a,b);

  int len = l/a;
  for (int i=1;i<len+1;i++){
    if(a*i % b == c){
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;

}
