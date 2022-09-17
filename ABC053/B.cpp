#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  cin >> s;

  int pos_a = s.find("A");
  int pos_z = s.rfind("Z");

  int ans = pos_z - pos_a + 1;
  cout << ans << endl;
  
}
