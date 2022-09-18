#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;
  cin>>s;
  int sl=s.size();

  while(2<sl){
    s.erase(sl-1);
    sl=s.size();
    if(sl%2!=0){continue;}

    if(s.substr(0,sl/2)==s.substr(sl/2,sl/2)){
      cout << sl << endl;
      return 0;
    }
  }
}
