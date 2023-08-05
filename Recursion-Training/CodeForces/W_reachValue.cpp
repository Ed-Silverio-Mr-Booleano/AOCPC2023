#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)

using namespace std;


bool reached(ll n, ll alvo = 1){
    if( alvo == n) return true;
    if( alvo > n) return false;
    return reached(n, alvo*10) || reached(n, alvo*20);
}
int main() {
    fast;
    freopen("W.in", "r", stdin);
    int t;cin>>t;
    while(t--){
        ll n; cin>>n;
        cout <<(reached(n) ? "YES" : "NO")<<endl;
    }
    
    return 0;
}