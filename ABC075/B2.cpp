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
#define all(x) (x.begin(),(x).end())
#define sz(x) ((int)(x).size())
#define fore(i,a) for(auto &i:a)

int main(){
  int h,w;
  cin>>h>>w;
  vs s(h);
  rep(y,0,h){cin>>s[y];}

  rep(y,0,h) rep(x,0,w){
    int c=0;
    if(s[y][x]=='#'){continue;}
    rep(dx,-1,2) rep(dy,-1,2){
      int xx=x+dx;
      int yy=y+dy;
      if(0<=xx and xx<w and 0<=yy and yy<h){
        if(s[yy][xx]=='#'){c++;}
      }
    }
    s[y][x]=char(c+'0');
  }
  rep(y,0,h){cout<<s[y]<<endl;}
}
