#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)


using namespace std;

int main(){
    fast;
    int n, h, x, l = 1;




    cin>>n >>h >> x;
    int s[n+1];
    for(int i= 1; i <=n ; ++i){
        int p;
        cin>>p;
        if(h+p>= x){
           s[i] = h+p;
           l = i;
           break;
        }
    }
    cout <<l<<endl;
    return 0;
}