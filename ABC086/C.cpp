#include <iostream>
#include <stdlib.h>

using namespace std;

bool goal(int t0, int t1, int x0, int y0, int x1, int y1){
  int t = t1-t0;
  int xg = x1 - x0;
  int yg = y1 - y0;

  int d = abs(xg)+abs(yg);
  
  if (t < d){
    return false;
  }else if ((t%d)%2 == 0){
    return true;
  }else{
    return false;
  }
}

int main(){
  int n;
  cin >> n;

  int t[n+1];
  int point[n+1][2];
  t[0]=0;
  point[0][0]=0; //x
  point[0][1]=0; //y

  for (int i=1; i<n+1; i++){
    cin >> t[i] >> point[i][0] >> point[i][1];    
  } 
  
  bool flag = false;
  for (int i=1; i<n+1; i++){
    flag = goal(t[i-1], t[i], point[i-1][0], point[i-1][1], point[i][0], point[i][1]);
    if (flag==false){
      cout << "No" << endl;
      break;
    }
  }
  if (flag==true){
    cout << "Yes" << endl;
  }
  
}
