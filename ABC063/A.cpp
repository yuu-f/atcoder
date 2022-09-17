#include <iostream>

using namespace std;

int main(){
  int a,b;
  cin >> a >> b;

  int sum=a+b;
  if (10<=sum){
    cout << "error" << endl;
  }else{
    cout << sum << endl;
  }
}
