#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)

using namespace std;
int aux = 1;
void printN(int n){
    if(n <=0) return ;
    else{
        cout <<aux<<endl;
        aux++;
        printN(n-1); 
    }
}
int main(){
    fast;
    freopen("B.in", "r", stdin);
    int n; cin >> n;
    printN(n);
    return 0;
}