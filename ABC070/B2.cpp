#include <iostream>

using namespace std;

int main(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;

  int min_=min(b,d);
  int max_=max(a,c);

  cout << max(0,min_-max_) << endl;
}
