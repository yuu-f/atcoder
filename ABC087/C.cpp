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
  vi a1(n);
  vi a2(n);
  rep(i,0,n){cin>>a1[i];}
  rep(i,0,n){cin>>a2[i];}

  int sum=0;
  int ans=0;
  rep(i,0,n){
    sum=accumulate(a1.begin(),a1.begin()+i+1,0)+accumulate(a2.begin()+i,a2.end(),0);
    ans=max(ans,sum);
  }
  cout<<ans;
}
