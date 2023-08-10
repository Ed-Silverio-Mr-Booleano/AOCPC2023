#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define ll long long


using namespace std;

bool isPowerTwo(ll n){
    if(n < 0) return false;
    int r = log2(n);
    return r == log2(n);
}

int main() {
    fast;
    freopen("A.in", "r", stdin);
    ll n; cin>> n;
    cout << (isPowerTwo(n) ? "YES": "NO")<<endl;
    
    return 0;
}