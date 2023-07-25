#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)

using namespace std;

ll sum(ll n){
    ll c = 0;

    if(n == 1) return 0;

    for(ll i = 1; i*i <= n; i++){
        if(n%i == 0){
            c +=i;
            if(n/i != i && n/i != n) c+= n/i;
        }

    }

    return c;
}

int main(){

    fast;
    //freopen("F.in", "r", stdin);

    int t;
    ll n;

    cin >> t;
    while(t--){
        cin >> n;
        cout <<sum(n)<<endl;
    }
    
    return 0;
}