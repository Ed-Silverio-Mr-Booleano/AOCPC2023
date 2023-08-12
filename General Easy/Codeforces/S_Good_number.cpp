#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define ll long long

using namespace std;

bool isGod(string s, int k){
    int g = 0;
    int dp[10];
 
    return ( g == s.length() ? true : false);
}
int main(){
    fast;
    freopen("S.in", "r", stdin);
    string a;
    int n, k;
    cin>>n>>k;
    while(n--){
        cin>>a;
        if( isGod(a, k)) cout <<"BOM"<<endl;
        else cout <<"Mau"<<endl;
    }
    return 0;
}