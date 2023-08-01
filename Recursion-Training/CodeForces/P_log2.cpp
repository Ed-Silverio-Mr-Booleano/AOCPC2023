#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define ll long long
using namespace std;
ll c = 0;
ll log22 (ll n){
    if(n == 1) return c;
    else {
        c++;
        n /=2;
        log22(n);
        
    }
}

int main(){
    fast;
    freopen("P.in", "r", stdin);
    ll n; cin>>n;
    cout <<log22(n)<<endl;

    return 0;
}