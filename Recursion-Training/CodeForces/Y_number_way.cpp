#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)

using namespace std;

int S, E;

int numberWay(int s, int e ){
    if(s == e) return 1;
    if(s > e) return 0;
    /*int c = 0;
    c += numberWay(s+1, e); 
    c += numberWay(s+2, e);
    c += numberWay(s+3, e);*/

    /*return c;*/
    return numberWay(s+1, e) +  numberWay(s+2, e) +  numberWay(s+3, e);
}
int main(){
    fast;
    cin>>S>>E;

    cout <<numberWay(2, 5)<<endl;

    return 0;
}