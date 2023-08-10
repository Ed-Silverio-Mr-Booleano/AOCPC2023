#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define ll long long

using namespace std;

ll fat(int n){
    if(n <= 1) return 1;
    return n * fat(n-1);
}

int main(){
    fast;
    int a, b;
    cin>>a>>b;


    ll npr = fat(a)/fat(a-b);
    ll ncr = fat(a)/(fat(b)*(fat(a-b)));

    cout <<ncr<<" "<<npr<<endl;


    return 0;
}