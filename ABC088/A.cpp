#include <iostream>

using namespace std;

int main(){
  int n,a;
  cin >> n >> a;

  if(n%500>a){
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
  }
}
