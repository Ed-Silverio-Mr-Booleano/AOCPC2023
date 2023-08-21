#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)

using namespace std;


int main(){
    string s, n ="";
    cin>>s;

    for(int i = 0; i < s.length(); ++i){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
            continue;
        n += s[i];
    }
    cout <<n<<endl;

    return 0;
}