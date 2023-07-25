#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)


using namespace std;

int gcd(int x, int y){
    if(y == 0) return x;

    return gcd(y, x%y);

}
int main(){
    fast;
    //freopen("L.in", "r", stdin);
    int t, maior;
    cout<<gcd(12, 24)<<endl;

    //cout <<gcd(4, 7)<<endl;

    /*cin >> t;

    while(t--){
        int n; cin >> n;
        int v[n];
        for(int i = 1, aux; i <= n; i++){
            cin >> aux;
            for(int j = 1; j <=aux; j++){
                if(gcd(aux, j) == 1){
                    cout <<aux<<"+"<<j<<endl;
                    cout <<i <<""<<j<<endl;
                    maior = i+j;
                    maior = max(maior, 1);
                }
            }
            

        }
        cout << maior<<endl;
        maior = 1;

    }*/


    return 0;
}