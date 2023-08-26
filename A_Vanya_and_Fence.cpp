#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)


using namespace std;

int main(){
    fast;
    int n, h, a, s = 0;

    cin>>n >>h;
    while(n--){
        cin>>a;
        if(a <= h) s++;
        else s+=2; 
    }
    cout<<s<<endl;
    return 0;
}