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
  string x;
  cin>>x;
  int a,b,c,d;
  a=int(x[0]-'0');
  b=int(x[1]-'0');
  c=int(x[2]-'0');
  d=int(x[3]-'0');
  
  rep(i,0,(1<<3)){
    bitset<3> s(i);
    int aa=a,bb=b,cc=c,dd=d;
    string op1="+",op2="+",op3="+";
    if(s.test(0)){dd=-1*d;op3="-";}
    if(s.test(1)){cc=-1*c;op2="-";}
    if(s.test(2)){bb=-1*b;op1="-";}
    if(aa+bb+cc+dd==7){
      cout<<a<<op1<<b<<op2<<c<<op3<<d<<"=7";
      return 0;
    }
  }
}
