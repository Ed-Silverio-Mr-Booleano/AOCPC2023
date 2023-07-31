#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define ll long long


using namespace std;

int gcd(int x, int y){
    if(y == 0) return x;

    return gcd(y, x%y);

}
int main(){
    fast;
    //freopen("L.in", "r", stdin);
    int t, maior, ui= 0 , uj = 0;
    //cout<<gcd(12, 24)<<endl;

    //cout <<gcd(4, 7)<<endl;

    cin >> t;

    while(t--){
        maior = 1;
        ll n; cin >> n;
        ll v[n+1];
        for(ll i = 1, aux; i <= n; i++){
            cin >> aux;
            v[i] = aux;
        }

        for(ll i = 1; i <= n; i++){
            for(ll j = i; j <=n; j++){
                if(gcd(v[i], v[j]) == 1){
                    maior = i+j;
                    maior = max(maior, 1);
                }
                
            }
            

        }
        if(maior == 1) cout << -1 <<endl;
        else cout <<maior<<endl;
        

    }


    return 0;
}