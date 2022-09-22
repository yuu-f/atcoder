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
  string s;
  cin>>n>>s;
  int ans=0;

  rep(i,0,n-1){
    vector<char> x,y;
    rep(j,0,i+1){x.pb(s[j]);}
    rrep(j,n,i+1){y.pb(s[j]);}
    sort(all(x));
    sort(all(y));
    x.erase(unique(all(x)),x.end());
    y.erase(unique(all(y)),y.end());
    int sum=0;
    rep(j,0,sz(x)) rep(k,0,sz(y)){
      if(x[j]==y[k]){sum++;}
    }
    ans=max(ans,sum);
  }
  cout<<ans;
}
