#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)


using namespace std;

int main(){
    fast;
    int n, maior = 1, aux, menor = 1001;

    cin>>n;
    int a[1000+1];

    memset(a, 0, sizeof(a));

    for(int i= 1; i <=n ; ++i){
        cin >> aux;
        a[aux] = 1;
        maior = max(maior, aux);
        menor = min(menor, aux);
    }
    int l;
    for(int i = menor; i <= maior; ++i){
        if(a[i] == 0) {
            l = i;
            break;
        }
    }
    cout <<l<<endl;
    
    return 0;
}