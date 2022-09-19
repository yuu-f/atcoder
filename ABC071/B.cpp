#include <iostream>
#include <string>

using namespace std;

int main(){
  string s;
  cin>>s;

  for(char c='a'-0;c<='z'-0;c++){
    if(s.find(c)==-1){
      cout << c << endl;
      return 0;
    }
  }
  cout << "None" << endl;
}
