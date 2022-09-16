#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  string s1,s2,s3;
  cin >> s1 >> s2 >> s3;

  string s={};
  s.insert(s.end(),s1[0]);
  s.insert(s.end(),s2[0]);
  s.insert(s.end(),s3[0]);

  transform(s.begin(), s.end(), s.begin(), ::toupper);

  cout << s << endl;
  
}
