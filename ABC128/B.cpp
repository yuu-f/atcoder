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
    vector<tuple<string,int,int>> x(n);
    rep(i,0,n){
        string s;
        int p;
        cin>>s>>p;
        x[i]=make_tuple(s,-p,i+1);
    }
    
    sort(x.begin(),x.end());
    
    rep(i,0,n){
        string a;
        int b,c;
        tie(a,b,c)=x[i];
        
        cout<<c<<endl;
    }
    
}
