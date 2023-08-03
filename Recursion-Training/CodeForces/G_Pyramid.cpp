#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)

using namespace std;

int i = 1;
int c;
void asterix(int a){
    for(int i =1; i <a; i++)
        cout <<"*";
}
void buildP(int n){
    if(i > n){
        return;
    }
    cout<<setw(c);
    asterix(i*2);
    cout<<endl;
    i++;
    c--;
    buildP(n);
}
int main(){
    fast;
    int n; cin >> n;

    c = n;
    buildP(c);
    return 0;
}