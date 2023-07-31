#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)

using namespace std;

int c = 0;
int countVowels(string s, int l){
    if(l < 1) return c;
    else{
        s[l-1] = toupper(s[l-1]);
        if(s[l-1] == 'A' || s[l-1] == 'E' || s[l-1] == 'I' || s[l-1] == 'O' || s[l-1] == 'U' )
            c++;
        return countVowels(s, l-1);
    }
}
int main(){
    fast;
    //freopen("I.in", "r", stdin);
    string s;
    getline(cin, s);
    cout <<countVowels(s, s.length())<<endl;
    return 0;
}