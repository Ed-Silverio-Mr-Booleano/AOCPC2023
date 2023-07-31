#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)

using namespace std;
void reversed(ll v[], int size){
    if(size < 0) return;
    else{
        if(size%2 == 1) cout <<v[size-1]<<" ";
        reversed(v, size-1);
    }
}

int main(){
    fast;
    //freopen("F.in", "r", stdin);
    int n; cin>>n;
    ll v[n];
    for(ll i = 0, a; i < n; i++){
        cin>>a;
        v[i] = a;
    }

    reversed(v, n);
    cout<<endl;
    
    return 0;
}