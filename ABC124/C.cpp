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
  string s;
  cin>>s;

  int sum0=0;
  int sum1=0;
  rep(i,0,sz(s)){
    if(i%2==0){
      if(int(s[i]-'0')==0){continue;}else{sum0++;}
    }else{
      if(int(s[i]-'0')==1){continue;}else{sum0++;}
    }
  }
  rep(i,0,sz(s)){
    if(i%2==0){
      if(int(s[i]-'0')==1){continue;}else{sum1++;}
    }else{
      if(int(s[i]-'0')==0){continue;}else{sum1++;}
    }
  }
  cout<<min(sum0,sum1);
}
