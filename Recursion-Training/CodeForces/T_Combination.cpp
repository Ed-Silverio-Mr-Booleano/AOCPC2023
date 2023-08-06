#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)

using namespace std;

int combination(int r, int c){
    if(r < c) return 0;
    if(r == c || c == 0) return 1;

    return combination(r-1, c)+combination(r-1, c-1);
}

int main(){
    fast;
    freopen("T.in", "r", stdin);

    int r, c; cin>>r>>c;

    cout <<combination(r, c)<<endl;

    return 0;
}