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
    int n;
    cin>>n;
    vi a(n);
    rep(i,0,n)cin>>a[i];
    
    sort(all(a));
    a.erase(unique(all(a)),a.end());
    
    int c=1;
    while(1){
        if(n==0)break;
        if(a[0]==c){
            c++;
            a.erase(a.begin());
            n-=1;
        }else{
            if(n>=2){
                c++;
                n-=2;
            }else{
                break;
            }
        }
    }
    cout<<c-1;
    
}
