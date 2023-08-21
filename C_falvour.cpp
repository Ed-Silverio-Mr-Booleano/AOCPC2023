#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)

using namespace std;


int main(){
    fast;
    freopen("C.in", "r", stdin);
    int n;
    cin>>n;
    
    int f[n+1], s[n+1]; 
    for(int i = 1; i <= n; ++i){
        cin>> f[i]>>s[i]; 
    }


    int m1 = s[1];
    int i1 = 1;
    int m2 = s[2];
    int i2 = 2;
    for(int i = 2; i <= n; ++i){
        if(s[i]> m1){
            m2 = m1;
            i2 = i1;
            m1 = s[i];
            i2 = i;
        }else if(s[i]> m2){
            m2 = s[i];
            i2 = i;
        }
    }
    
        
    int c;

    if(f[i1] != f[i2]) c = m1  + m2;
    else c = m1 +m2/2;

    cout <<c<<endl;

    return 0;
}