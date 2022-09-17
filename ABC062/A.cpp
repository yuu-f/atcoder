#include <iostream>

using namespace std;
int main(){
  int x,y;
  cin >> x >> y;

  if(x==2){
    if(y==2){
      cout << "Yes" << endl;
      return 0;
    }else{
      cout << "No" << endl;
      return 0;
    }
  }
  if(x==4||x==6||x==9|x==11){
    if(y==4||y==6||y==9||y==11){
      cout << "Yes" << endl;
      return 0;
    }else{
      cout << "No" << endl;
      return 0;
    }
  }
  if(y==2||y==4||y==6||y==9||y==11){
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
}
