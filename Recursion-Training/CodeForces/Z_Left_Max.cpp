#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie();
#define ll long long

using namespace std;
int i = 0;
int maior = 0;
void leftMax(ll a[], int s){
    if(s < 1) return; 
    for(int j = 0; j <=i ; j++){
        if(j == 0) maior = a[j];
        else{
            if(maior < a[j]) maior = a[j];
        }
    }
    cout << maior<<" ";
    i++;
    leftMax(a, s-1);
}
int main(){
    fast;
    //freopen("Z.in", "r", stdin);

    int n; cin>>n;
    ll a[n];

    for(int i =0; i < n; i++)
        cin>> a[i];

    leftMax(a, n);

    return 0;
}