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
  int s;
  cin>>s;
  vi a;
  a.pb(s);

  int fx=0;
  int i=0;

  while(fx!=1){
    i++;
    if(a[i-1]%2==0){
      fx=a[i-1]/2;
    }else{
      fx=3*a[i-1]+1;
    }
    a.pb(fx);
  }
  a.pb(4);
  a.pb(2);
  a.pb(1);

  rep(j,0,sz(a)){
    rep(k,j+1,sz(a)){
      if(a[j]==a[k]){
        cout<<k+1;
        return 0;
      }
    }
  }
}
