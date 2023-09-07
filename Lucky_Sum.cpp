#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define MAX 10000000000
using namespace std;

vecor<ll> lucky;
void next(ll n){
    if(n > MAX){
        return;
    }
    lucky.push(n);
    next(n*10+7);
    next(n*10+4);
    
}
int main() {
    fast;n 
    ll l, r, sum = 0;
    
    //cin >> l >> r;
       
     cout <<sum<<endl;

    return 0;
}