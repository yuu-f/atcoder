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
    int n,m,c;
    cin>>n>>m>>c;
    vi b(m);
    rep(i,0,m){cin>>b[i];}
    vvi a(n,vi(m));
    rep(i,0,n){
        rep(j,0,m){
            cin>>a[i][j];
        }
    }
    
    int ans=0;
    rep(i,0,n){
        int sum=0;
        rep(j,0,m){
            sum+=a[i][j]*b[j];
        }
        
        if(sum+c>0){
            ans++;
        }
    }
    cout<<ans;
    
}
