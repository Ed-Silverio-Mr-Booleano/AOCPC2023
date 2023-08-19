#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)

using namespace std;

bool isDistinct(int n){ // Is valid
    set<int> digts;
    while (n > 0){
        digts.insert(n%10);
        n /= 10;
    }
    if(digts.size() == 4) return true;
    
    return false;
}
int backtrack(int y, int n){
    if(n > y) return n; // is soluction
    for(int i = y+1; i <= 90000; i++){
        if(isDistinct(i))
        return backtrack(y, i);
    }
    return -1;
}

int main(){
    fast;
    //freopen("A.in", "r", stdin);
    int a;
    cin >> a;
    cout <<backtrack(a, 0)<<endl;
    return 0;
}