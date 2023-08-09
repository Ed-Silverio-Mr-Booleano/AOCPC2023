#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define ll long long


using namespace std;

int main(){
    fast;
    freopen("H.in", "r", stdin);
    ll a, b;
    cin>>a>>b;
    cout <<__gcd(a, b)<<" "<<lcm(a, b)<<endl;
    return 0;
}