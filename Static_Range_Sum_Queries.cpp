#include <bits/stdc++.h>
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)
const int MAX = 1e5+7;

using namespace std;

int main(){
    fast;
    ll n, q;
    cin>>n>>q;
    ll psum[n+7];
    psum[0] = 0;
    for(int i = 1; i <=n; ++i){
        ll x;
        cin>> x;
        psum[i] = psum[i-1] ^ x;
    }

    int a, b;
    while(q--){
        cin>>a>>b;
        cout <<(psum[b] ^ psum[a-1])<<endl;
    }
    return 0;
}