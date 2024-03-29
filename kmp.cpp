//Given a text x[0..n-1] and a pattern y[0..m-1] prints all occurrences of y[] in x[]
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll              long long
#define l1(i, n)        for (ll i = 1; i <= n; i++)
#define l0(i, n)        for (ll i = 0; i < n; i++)
#define pb              push_back
#define xx              first
#define yy              second
#define sorted(x)       sort(x.begin(), x.end())
#define reversed(x)     reverse(x.begin(), x.end())
#define all(x)          x.begin(), x.end()
#define ms(a, b)        memset(a, b, sizeof(a));
#define cases(tc)       cout<<"Case #"<<tc<<": "
#define nl              cout<<"\n";
#define pi              acos(-1)
#define mod             1000000007
#define inf             1000000000000000001
#define maxn            200001




ll f[maxn];
vector <ll> ans;

void failure(string &y){
    f[0]=0;
    ll i=1;
    ll len=0;
    ll m=y.size();
    while(i<m){
        if(y[len]==y[i]){
            len++;
            f[i]=len;
            i++;
        }
        else{
            if(len!=0){
                len=f[len-1];
            }
            else{
                f[i]=0;
                i++;
            }
        }
    }
}

void kmp(string &x, string &y){
    failure(y);
    ll n=x.size();
    ll m=y.size();
    ll i=0;
    ll j=0;
    while(i<n){
        if(x[i]==y[j]){
            i++;
            j++;
            if(j==m){
                ans.pb(i-j);
                j=f[j-1];
            }
        }
        else{
            if(j!=0){
                j=f[j-1];
            }
            else{
                i++;
            }
        }
    }
}



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
    }
    return 0;
}
