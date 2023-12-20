#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)
typedef long long ll;

using namespace std;

int main(){
    fast;
    int t;
    cin>>t;

    while(t--){
        int n;
        ll s = 0;
        for(int i = 0; i < n; ++i){
            if(n%2==1){
                cout<<"YES"<<endl;
                break;
            }
           int a;
           cin>>a;
           s += a; 
        }
    }

}

