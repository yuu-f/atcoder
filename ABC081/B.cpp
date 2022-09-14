#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main(){
  int n,j;
  
  cin >> n;
  vector<int> input(n);
  
  for (int i=0;i<n;i++)
  {
    cin >> j;
    input[i] = j; 
  }
  
  int c=-1;
  bool finished = false;

  while(finished == false){
    for (int i=0;i<n;i++)
    {
      if (input[i] % 2 == 0){ 
        input[i] = input[i]/2;
      }else{
        finished=true;
      }
    }
    c += 1;
  }

  cout << c << endl;

}
