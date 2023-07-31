#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define ll long long

using namespace std;

ll fat (ll n){
    if(n <= 1) return 1;
    else{
        return n * fat(n-1);
    }
}

int main(){
    fast;
    //freopen("E.in", "r", stdin);
    ll n; cin>> n;
    cout <<fat(n)<<endl;
    return 0;
}