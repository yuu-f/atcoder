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
    int n,d;
    cin>>n>>d;
    vvi x(n,vi(d));
    
    rep(i,0,n){
        rep(j,0,d){
            cin>>x[i][j];
        }
    }
    
    int count=0;
    rep(i,0,n){
        rep(k,i+1,n){
            int sum=0;
            rep(j,0,d){
                sum+=(x[i][j]-x[k][j])*(x[i][j]-x[k][j]);
            }
            //cout<<i<<" | "<<k<<" | "<<sum<<endl;
            ll l=sqrt(sum)*100000000;
            if(l%100000000==0){
                count++;
            }
        }
    }
    cout<<count<<endl;
}