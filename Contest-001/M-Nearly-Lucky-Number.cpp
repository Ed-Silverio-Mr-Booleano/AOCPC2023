#include <bits/stdc++.h>

using namespace std;
int main(){
    //freopen("M.in", "r", stdin);
    string number;
    int luck = 0;

    cin >> number;
    for(int i = 0; i< number.length();i++){
       if(number[i] == '4' || number[i] == '7') luck++;
    }

    if(luck == 4 || luck == 7) cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
    return 0;
}
