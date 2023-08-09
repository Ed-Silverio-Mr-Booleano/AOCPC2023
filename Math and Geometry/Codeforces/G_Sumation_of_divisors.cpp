#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)

using namespace std;
ll sumation(ll a){
    ll sum = 0;
    for(ll i = 1; i*i <= a; i++){
        if(a%i == 0){
            sum +=i;
            ll b = a/i;
            if(i != b ) sum +=b;
        }  
    }    
    return sum;
}


int main(){
    fast;
    //freopen("G.in", "r", stdin);
    ll n; cin>>n;
    cout<<sumation(n)<<endl;
    

    return 0;
}