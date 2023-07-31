#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)

using namespace std;

int c = 0;
int countVowels(string s, int l){
    if(l < 0) return c;
    else{
        if(s[l-1] == 'A' || s[l-1] == 'E' || s[l-1] == 'I' || s[l-1] == 'O' || s[l-1] == 'U' )
            c++;
        countVowels(s, l-1);
    }
}
int main(){
    string s = "Data Structure Lab";
    cout <<countVowels(s, s.length()-1)<<endl;
    return 0;
}