#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define ll long long

using namespace std;

int main(){
    fast;
    int n ; cin>>n;
    double ln = 0;
    for(int i = 1; i <= n; i++){
        ln += log10(i);
    }
    int aux = ++ln;

    cout <<"Number of digits of "<<n<<"!"<<" is "<<aux<<endl;

    return 0;
}