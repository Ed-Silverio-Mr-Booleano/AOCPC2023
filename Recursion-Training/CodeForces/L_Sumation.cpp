#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define ll long long

using namespace std;

ll sumation (vector<ll> v, int size){
    if(size == 0) return 0;
    else return v[size-1]+ sumation(v, size-1);
}

int main(){
    fast;
    //freopen("L.in", "r", stdin);
    ll n, a; cin>>n;
    vector<ll> v;
    for(int i = 0; i < n; i++){
        cin>>a;
        v.push_back(a);
    }

    cout <<sumation(v, v.size())<<endl;

    return 0;
}