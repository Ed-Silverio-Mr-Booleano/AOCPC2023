#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define ll unsigned long long

using namespace std;

ll multiply(ll a, ll b){
    if( a == 0 || b == 0) return 0;
    return a + multiply(a, b-1);
}
int main(){
    fast;

    int n;
    cin>>n;
    while(n--){
        ll a, b;
        cin>>a>>b;
        cout <<multiply(a, b)<<endl;
    }

    return 0;
}