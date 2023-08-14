#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define ll long long

using namespace std;

bool isGod(string s, int k){
    string o ="";
    sort(s.begin(), s.end());
    for(int i = 0; i <=k; i++){
        o += char('0' + i);
    }

    return ( s == o ? true : false);
}
int main(){
    fast;
    //freopen("S.in", "r", stdin);
    int n, k, t = 0;
    cin>>n>>k;
    cin.ignore();
    while(n--){
        string a;
        getline(cin , a);
        if( isGod(a, k)) t++;
    }
    cout<<t<<endl;
    return 0;
}