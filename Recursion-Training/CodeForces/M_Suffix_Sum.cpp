#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)

using namespace std;
ll s = 0;
ll suffixSum(ll v[], int n, int m){
    if(n < 0) return s;
    else{
        if(m > 0){
            s += v[n-1];
        }
        suffixSum(v, n-1, m-1);
    }
}
int main(){
    fast;
    //freopen("M.in", "r", stdin);
    int n, m;
    cin>>n>>m;
    ll v[n];
    for(int i =0, a; i < n; i++){
        cin>>a;
        v[i] = a;
    }

    cout << suffixSum(v, n, m)<<endl;
    return 0;
}