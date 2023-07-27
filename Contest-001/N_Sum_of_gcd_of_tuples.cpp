#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define ll long long

using namespace std;
int main() {
    fast;
    freopen("N.in", "r", stdin);
    int soma = 0;
    int k; cin>>k;

    for(int i =1; i <=k; i++)
        for(int j = 1; j <= k; j++)
            for(int l = 1; l <= k; l++)
                soma += __gcd(i, __gcd(j, l));
    //O(k^3)

    cout <<soma<<endl;

    
}