#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define ll long long
#define vi vector<ll>

using namespace std;

vi p = {100, 20, 10, 5, 1};
vi dp;
ll min2 = LLONG_MAX;

ll moedas(ll n, ll m){

    if(n == 0){
        if(m < min2) min2 = m;
        return m;
    }
    if(dp[n] != -1)
        return dp[n];
        
    if(m > min2)
        return m;

    ll mini = LLONG_MAX;
    for(ll i: p){
        if(n-i >= 0){
            mini = min(mini, moedas(n-i, m+1));
        }
    }
    return dp[n] = mini;
}

int main(){
    fast;
    freopen("96A.in", "r", stdin);

    ll n;
    cin >> n;
    dp.assign(n+10, -1);
    cout << moedas(n, 0) << endl;
}