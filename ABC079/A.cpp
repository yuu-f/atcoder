#include <iostream>
#include <string>

using namespace std;
int main(){
  string n;
  cin >> n;
  int ns=n.length();

  for(int i=0;i<ns-2;i++){
    if(n[i]==n[i+1] && n[i]==n[i+2]){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
