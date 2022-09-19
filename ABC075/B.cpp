#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  int h,w;
  cin>>h>>w;
  vector<string> s(h);
  for(int i=0;i<h;i++){cin>>s[i];}

  vector<vector<int>> x(h+2, vector<int>(w+2,0));
  vector<string> ans(h+2);

  for(int i=0;i<h;i++){
    int num=0;
    for(int j=0;j<w+2;j=num+1){
      num=s[i].find('#', num);
      if(num==-1){break;}
      x[i+1][num+1]=1;
      num+=1;
    }
  }

  vector<vector<int>> _x(h+2, vector<int>(w+2,0));
  for(int i=1;i<h+1;i++){
    for(int j=1;j<w+1;j++){
      if(x[i][j]!=1){
        _x[i][j]=x[i-1][j-1]+x[i][j-1]+x[i+1][j-1]+x[i-1][j]+x[i+1][j]+x[i-1][j+1]+x[i][j+1]+x[i+1][j+1];
      }else{
        _x[i][j]=-1;
      }
    }
  }


  for(int i=0;i<h+2;i++){
    for(int j=1;j<w+1;j++){
      if(_x[i][j]==-1){
        ans[i]+="#";
      }else{
        ans[i]+=to_string(_x[i][j]);
      }
    }
  }

  for(int i=1;i<h+1;i++){
    cout << ans[i] << endl;
  }
}
