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
  int n;
  cin>>n;
  vs sn(n);
  rep(i,0,n){cin>>sn[i];}
  
  int m;
  cin>>m;
  vs tm(m);
  rep(j,0,m){cin>>tm[j];}
  
  set<string> st;
  rep(i,0,n){st.insert(sn[i]);}

  int x;
  int ans=0;
  auto itr=st.begin();

  rep(i,0,sz(st)){
    x=count(all(sn),*itr)-count(all(tm),*itr);
    ans=max(ans,x);
    ++itr;
  }
  cout<<ans;
}
