#include <iostream>

using namespace std;

int main(){
  int a,b;
  cin >> a >> b;

  if (a==b){
    cout << "Draw" << endl;
    return 0;
  }
  if (a==1|b<a&&b!=1){
    cout << "Alice" << endl;
  }else{
    cout << "Bob" << endl;
  }
}
