#include <iostream>
#include <string>

using namespace std;

int main(){
  string s;
  cin>>s;
  
  int count=0;
  for(char c='a';c<='z';c++){
    count=0;
    for(int i=0;(i=s.find(c,i))!=-1;i++){count+=1;}
    if(1<count){cout<<"no"<<endl;return 0;}
  }
  cout<<"yes"<<endl;
}
