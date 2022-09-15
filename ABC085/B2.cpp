#include <iostream>
#include <set>
using namespace std;

int main(){
  int n, a;
  int data[101];

  cin >> n;
  for (int i=0; i<n; i++){
    cin >> data[i];
  }

  set<int> st;
  for (int i=0; i<n; i++){
    st.insert(data[i]);
  }
  
  int ans = st.size();
  cout << ans << endl;
}

