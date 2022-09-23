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
  int h,w;
  cin>>h>>w;
  vs a(h);
  rep(y,0,h){cin>>a[y];}

  rep(y,0,sz(a)){
    if(a[y].find("#")==string::npos){
      a.erase(a.begin()+y);
      y+=-1;
    }
  }
  rep(x,0,sz(a[0])){
    int c=0;
    rep(y,0,sz(a)){
      if(a[y][x]=='.'){c++;}
    }
    if(c==sz(a)){
      rep(y,0,sz(a)){
        a[y].erase(x,1);
      }
      x+=-1;
    }
  }
  rep(y,0,sz(a)){cout<<a[y]<<endl;}  
}
