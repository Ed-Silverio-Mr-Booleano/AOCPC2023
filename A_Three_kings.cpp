#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)

using namespace std;

int main(){
    fast;
    int a, b, c, x, y, z;
    vector<string> kings(3+1);

    cin>>a>>b>>c>>x>>y>>z;

    a *= x;
    b *=  y;
    c *= z;

    int m = max(a, max(b, c));
    if(a == m) kings.push_back("Barley");
    if(b == m) kings.push_back("Hops");
    if(c == m) kings.push_back("Malt");

    sort(kings.begin(), kings.end());

    for(auto i: kings) cout<<i<< " ";
    cout<<endl;


    return 0;
}