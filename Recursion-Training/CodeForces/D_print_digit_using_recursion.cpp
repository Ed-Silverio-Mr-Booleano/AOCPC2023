#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define ll long long

using namespace std;

/*void invertDigit(ll n){
    if(n == 0) return;
    else{
         ll r = n%10;
        
        if(n != 1)
            cout << r<<" ";
        else cout <<r;
        n = n/10;
        invertDigit(n);
    }
}*/
int s = 0;
void splitDigit(ll n){
    if(n == 0){
        if(s == 0) cout <<0;
        return;
    }
    else{
        s++;
        
        splitDigit(n/10);
        cout << n%10<<" ";
    
    }
}

int main(){
    fast;
    freopen("D.in", "r", stdin);

    int t;cin>>t;

    while(t--){
        ll n;
        cin>>n;
        splitDigit(n);
        cout<<endl;
        s = 0;
    }

    
    return 0;
}