#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  vector<int> x(n);
  for(int i=0;i<n;i++){cin>>x[i];}

  int sum=0;

  for(int i=0;i<n;i++){
    if(x[i]<k-x[i]){
      sum+=x[i]*2;
    }else{
      sum+=(k-x[i])*2;
    }
  }
  cout << sum;

}
