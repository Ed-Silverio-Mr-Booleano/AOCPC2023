/*if 
Y is not a multiple of 
4, then 
365 days;

if 
Y is a multiple of 
4 but not a multiple of 
100, then 
366 days;

if 
Y is a multiple of 
100 but not a multiple of 
400, then 
365 days;

if 
Y is a multiple of 
400, then 
366 days. */

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
    fast;
    int y;
    
    cin>>y;
    
    if(y%4 != 0) cout<<365<<endl;
    else if(y%4 == 0 && y%100 != 0) cout <<366<<endl;
    else if(y%100 == 0 && y%400 != 0) cout <<365<<endl;
    else if( y % 400 == 0) cout <<366<<endl;

    return 0;
}