#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)

using namespace std;
int c = 0, maior;
ll maxNum(ll v[], int size){
    if(size < 0) return maior;
    else{
        if(c == 0 ){
            maior = v[size-1];
            c++;
        }
         else {
            if(maior < v[size]) maior = v[size];
            
        }
        maxNum(v, size -1);
    }
    
}

int main(){
    fast;
    //freopen("K.in", "r", stdin);
    int n; cin>>n;
    ll v[n];
    for(ll i = 0, a; i < n; i++){
        cin>>a;
        v[i] = a;
    }
    cout <<maxNum(v, n)<<endl;
    
    return 0;
}