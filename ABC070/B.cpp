#include <iostream>

using namespace std;

int main(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;

  if(b<=c|d<=a){
    cout << 0 << endl;
    return 0;
  }

  if(a<=c){
    if(b<=d){
      cout << b-c << endl;
    }else{
      cout << d-c << endl;
    }
  }else{
    if(d<=b){
      cout << d-a << endl;
    }else{
      cout << b-a << endl;
    }
  }
}
