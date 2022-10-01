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
    int n,q;
    cin>>n>>q;
    vi l(n);
    vvi a(n);
    rep(i,0,n){
        int ll;
        cin>>ll;
        l[i]=ll;
        rep(j,0,ll){
            int aa;
            cin>>aa;
            a[i].pb(aa);
        }
    }
    vi s(q),t(q);
    rep(i,0,q){
        cin>>s[i]>>t[i];
    }
    
    rep(i,0,q){
        cout<<a[s[i]-1][t[i]-1]<<endl;
    }
    
    
}
