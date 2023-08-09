#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)

using namespace std;
bool isPrime(ll a){
    if(a < 2) return false;
    if(a % 2 == 0 && a!= 2) return false;
    if(a== 2) return true;
    for(int i = 2; i*i <= a; i+=2)
        if(a%i == 0) return false;
        
    return true;
}


int main(){
    fast;
    freopen("B.in", "r", stdin);

    ll n;
    cin>>n;
    cout << (isPrime(n) ? "YES" : "NO")<<endl;

    return 0;
}