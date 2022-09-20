#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vl = vector<long>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvll = vector<vll>;
using vs = vector<string>;
using pii = pair<int,int>;

#define pb push_back
#define mp make_pair
#define YESNO(bool) if(bool){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
#define YesNo(bool) if(bool){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}
#define yesno(bool) if(bool){cout<<"yes"<<endl;}else{cout<<"no"<<endl;}

#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) x.begin(),(x).end()
#define sz(x) ((int)(x).size())
#define fore(i,a) for(auto &i:a)

int main(){
  int a,b,k;
  cin>>a>>b>>k;
  set<int> st;
  
  if((b-a+1)>=k){
    rep(i,0,k){
      st.insert(a+i);
      st.insert(b-i);
    }
    auto itr=st.begin();
    rep(i,0,sz(st)){
      cout<<*itr<<endl;
      ++itr;
    }
  }else{
    rep(i,0,b-a+1){cout<<a+i<<endl;}
  }
}
