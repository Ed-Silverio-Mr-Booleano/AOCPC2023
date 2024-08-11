#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

int main() {

    fast;

    int t;
    cin >> t;

    while(t--){
        string s, t;
        cin >> s >> t;

        int k = 0, i = 0;
        while(k < t.size() && i < s.size()){
            if(s[i] == t[k]){
                i++;
                k++;
            } else if(s[i] == '?') {
                s[i] = t[k];
                i++;
                k++;
            } else {
                i++;
            }
        }

        while(i < s.size()){
            if(s[i] == '?')
                s[i] = 'a';
            i++;
        }

        cout<< (k == t.size() ? "YES" : "NO")<<endl;
    }

    return 0;
}