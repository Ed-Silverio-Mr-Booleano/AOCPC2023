#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define ll long long

using namespace std;
string s;
void conversion(ll n){

    if(n == 0){
        reverse(s.begin(), s.end());
        cout << s<<endl;
        return;
    }
    else{
        s += (n%2 == 0 ? "0" : "1");
        n = n /2;
        conversion(n);
    }
}
int main(){
    fast;
    //freopen("E.in", "r", stdin);
    int t;cin>>t;
    while(t--){
        ll n; cin >> n;
        conversion(n);
        s.clear();
    }
    
    return 0;
}