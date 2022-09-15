#include <iostream>
#include <vector>

using namespace std;

int main(){
  int a, b, c;
  int a_sum, b_sum, c_sum;
  int x;
  int sum;

  vector<int> data;  
  
  cin >> a >> b >> c >> x;

  for (int i=0; i<a+1; i++){
    a_sum=500*i;
    for (int j=0; j<b+1; j++){
      b_sum=100*j;
      for (int k=0; k<c+1; k++){
        c_sum=50*k;
        sum=a_sum+b_sum+c_sum;
        //cout << sum << endl;
        data.push_back(sum);
      }
    }
  }

  int flag=0;

  for (int i=0; i<data.size(); i++){
    //cout << i << endl;
    if(data[i]==x){
      flag+=1;
    }
  }
  
  cout << flag << endl;
}
