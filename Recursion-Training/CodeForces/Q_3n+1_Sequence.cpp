#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)

using namespace std;

int c = 0;
int sequenceLen(int n){
    if(n == 1){
        c++;
        return c;
    }
    else{
        c++;
        if(n%2==1) n = 3*n +1;
        else n = n/2;
        sequenceLen(n);
    }
}
int main(){
    fast;
    //freopen("Q.in", "r", stdin);
    int a; cin>>a;

    cout <<sequenceLen(a)<<endl;

    return 0;
}