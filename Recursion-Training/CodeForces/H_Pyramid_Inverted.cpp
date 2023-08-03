#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)

using namespace std;

int i;
int c = 1;
static void asterix(int a){
    for(int i = 1; i < a; i++) cout<<"*";
}
static void buildP(int n){
    if( i < 0) return;
    cout <<setw(c);
    asterix(i*2);
    cout <<endl;
    i--;
    c++;
    buildP(n);

} 
int main(){
    fast;
    int n; cin>>n;
    i = n;
    buildP(i);
    return 0;
}