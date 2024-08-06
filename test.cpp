// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define endl '\n'

using namespace std;

int main() {
    fast;
    string s, t;
    
    cin>>s>>t;
    
    if(s == t.substr(0, t.length()-1)) cout<<"Yes"<<endl;
    else cout <<"No"<<endl;

    return 0;
}