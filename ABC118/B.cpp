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
  int n,m;
  cin>>n>>m;
  vi k(n);
  vi a;
  int aa;
  rep(i,0,n){
    cin>>k[i];
    rep(j,0,k[i]){
      cin>>aa;
      a.pb(aa);
    }
  }
  int ans=0;
  rep(i,0,31){
    int c=0;
    c=count(all(a),i);
    if(c==n){
      ans++;
    }
  }
  cout<<ans;
}