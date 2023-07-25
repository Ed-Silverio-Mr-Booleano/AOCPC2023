#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)

using namespace std;

ll divisors(ll n){
    vector<ll> ans;
    ll c = 0;

    for(ll i = 1; i*i <= n; i++){
        if(n%i == 0){
            //ans.push_back(i); 
            c++;
            if(n/i != i) c++; //ans.push_back(n/i);
        }

    }

    return c; // O(sqrt(N))
}

int main(){

    fast;
    //freopen("N.in", "r", stdin);

    int t;
    ll n;

    cin >> t;

    for(int i = 0; i < t; i++){ // O(sqrt(N)) + O(t)
        cin >> n;
        if(divisors(n) == 3) cout <<"YES"<<endl;
        else cout <<"NO"<<endl;
    }


    return 0;
}