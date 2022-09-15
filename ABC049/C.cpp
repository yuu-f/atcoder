#include <iostream>
#include <string>

using namespace std;

int main(){
  string s;
  cin >> s;

  int num=4;
  string t_data[num] = {"dream", "dreamer", "erase", "eraser"};
  int max;
  int count=s.size();
  int len_t;
  string str;
  bool flag=false;

  max = s.size()/5;
  //cout << s.substr(s.size()-5, 5) << endl;

  for (int i=0; i<max; i++){
    flag=false;
    for (int j=0; j<num; j++){
      len_t = t_data[j].size();
      count -= len_t;
      if (count >= 0){
        str = s.substr(count, len_t);
        //cout << "i: " << i << ", j: " << j << ", str: " << str << endl;
      }else{
        count += len_t;
        continue;
      }
      if (str==t_data[j]){
        flag=true;
        //cout << "==" << t_data[j] << endl;
        break;
      }else{
        count += len_t;
        continue;
      }
    }
    if (flag==false){
      cout << "NO" << endl;
      break;
    }
    if (count==0){
      cout << "YES" << endl;
      break;
    }
  }

}
