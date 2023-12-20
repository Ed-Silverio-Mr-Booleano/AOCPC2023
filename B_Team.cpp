#include <bits/stdc++.h>
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)

using namespace std;

int main(){
    fast;
    ll q, n = 0;
    cin>>q;
    while(q--){
        int a, b, c;

        cin>>a>>b>>c;
        if(a == 1 && (b == 1 || c==1)) n++;
        else if ( b== 1 && c == 1 ) n++;

       
    }
    cout<<n<<endl;
    return 0;
}