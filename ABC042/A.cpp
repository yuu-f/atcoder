#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){
  int a, b, c;
  vector<int> data;

  cin >> a >> b >> c;
  data.push_back(a);
  data.push_back(b);
  data.push_back(c);

  int sum = accumulate(data.begin(), data.end(), 0);
  if (sum != 17){
    cout << "NO" << endl;
    return 0;
  }

  int count=0;
  for (int i=0; i<data.size(); i++){
    if (data[i]==5){
      count += 1;
    }
  }

  if (count==2){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }

}
