#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> a(n);

  for(int i=0;i<n;i++){cin>>a[i];}

  int count=0;
  int i=0,j=0;
  bool flag=false;

  while(flag==false){     
    count+=1;
    j=i;
    i=a[i]-1;
    a[j]=1;
    if(i==0){
      cout<<"-1"<<endl;
      return 0;
    }else if(i==1){
      cout<<count<<endl;
      flag=true;
    }
  }
}
