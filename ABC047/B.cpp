#include <iostream>
#include <vector>
using namespace std;

int main(){
  int w,h,n;
  cin >> w >> h >> n;
  vector<int> x, y, a;

  int _x,_y,_a;
  for (int i=0;i<n;i++){
    cin >> _x >> _y >> _a;
    x.push_back(_x);
    y.push_back(_y);
    a.push_back(_a);
  }
  
  int x_max=w;
  int x_min=0;
  int y_max=h;
  int y_min=0;
  for (int i=0;i<n;i++){
    if(a[i]==1){
      if (x_min < x[i]){x_min=x[i];}
    }else if(a[i]==2){
      if (x[i] < x_max){x_max=x[i];}
    }else if(a[i]==3){
      if (y_min < y[i]){y_min=y[i];}
    }else if(a[i]==4){
      if (y[i] < y_max){y_max=y[i];}
    }else{
      cout << "input error" << endl;
      break;
    }
  }
  int ans;
  if (x_max<x_min || y_max<y_min){
    ans=0;
  }else{
    ans = (x_max-x_min)*(y_max-y_min);
  }
  cout << ans << endl;
}
