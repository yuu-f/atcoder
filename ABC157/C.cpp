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

#define _GLIBCXX_DEBUG

int main(){
    int n,m;
    cin>>n>>m;
    vi s(m),c(m);
    rep(i,0,m){cin>>s[i]>>c[i];}
    
    rep(ans,0,1000){
        string is=to_string(ans);
        if(sz(is)!=n){
            continue;
        }
        bool flag=true;
        rep(j,0,m){
            rep(k,0,n){
                if(k+1==s[j] and (is[k]-'0')!=c[j]){
                    flag=false;
                }
            }
        }
        if(flag){
            cout<<ans;
            return 0;
        }
    }
    cout<<-1;
}
