#include <iostream>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;
  int ab=a+b;
  if(a%3==0||b%3==0||ab%3==0){
    cout << "Possible" << endl;
  }else{
    cout << "Impossible" << endl;
  }
}
