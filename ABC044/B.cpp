#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  string w;
  cin >> w;
  int c=0;
  bool flag=true;

  for (char alph='a';alph<='z'; ++alph){
    //cout << alph;
    c = count(w.begin(), w.end(), alph);
    if (c%2!=0){
      flag=false;
    }
  }
  if (flag==true){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

}
