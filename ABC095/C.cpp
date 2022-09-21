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
  int a,b,c,x,y;
  cin>>a>>b>>c>>x>>y;
  if(a+b<=2*c){
    cout<<a*x+b*y;
    return 0;
  }else{
    int z=0;
    int sum=0;
    rep(i,0,min(x,y)){
      z+=2;
    }
    if(x>y){
      if(a<=2*c){
        cout<<a*(x-z/2)+c*z;
        return 0;
      }else{
        z+=(x-y)*2;
        cout<<c*z;
        return 0;
      }
    }else{
      if(b<=2*c and x<y){
        cout<<b*(y-z/2)+c*z;
        return 0;
      }else{
        z+=(y-x)*2;
        cout<<c*z;
        return 0;
      }
    }
  }
}
