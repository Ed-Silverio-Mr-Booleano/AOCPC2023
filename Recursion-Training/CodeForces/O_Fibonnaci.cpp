#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)

using namespace std;

int fibo(int n){
    if(n == 1) return 0;
    else if(n == 2) return 1; 
    else return fibo(n-1) + fibo(n-2);
}
int main(){
    fast;
    freopen("O.in", "r", stdin);
    int a;cin>>a;
    cout <<fibo(a)<<endl;
}