#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){ 
  vector<string> s(10);
  for(int i=0;i<10;i++){
    cin >> s[i];
  }

  int a,b,c,d, cc, dd;
  bool a_flag=false;

  for(int i=0;i<10;i++){
    c=s[i].find('#');
    d=s[i].rfind('#');
    if(c!=-1&&a_flag==false){
      a=i+1;
      a_flag=true;
    }
    if(c!=-1){
      b=i+1;
      cc=c;
      dd=d;
    }
  }
  cc+=1;
  dd+=1;
  cout << a << " " << b << endl;
  cout << cc << " " << dd << endl;
}
