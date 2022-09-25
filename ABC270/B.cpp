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
    int x,y,z;
    cin>>x>>y>>z;
    
    if(x<0 and y<0){
        if(y<x){
            cout<<abs(x);
            return 0;
        }else{
            if(z>y){
                if(z<0){
                    cout<<abs(x);
                    return 0;
                }else{
                    cout<<abs(x)+abs(2*z);
                    return 0;
                }
            }else{
                cout<<-1;
                return 0;
            }
        }
    }else if(x>0 and y>0){
        if(x<y){
            cout<<abs(x);
            return 0;
        }else{
            if(z<y){
                if(z>0){
                    cout<<abs(x);
                    return 0;
                }else{
                    cout<<abs(x)+abs(2*z);
                    return 0;
                }
            }else{
                cout<<-1;
                return 0;
            }
        }
    }else{
        cout<<abs(x);
    }
}    
