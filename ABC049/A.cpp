#include <iostream>
#include <string>
using namespace std;

int main(){
  string c;
  string list[5]={"a","e","i","o","u"};

  cin >> c;
  for (int i=0;i<5;i++){
    if (c==list[i]){
      cout << "vowel" << endl;
      return 0;
    }
  }
  cout << "consonant" << endl;
}
