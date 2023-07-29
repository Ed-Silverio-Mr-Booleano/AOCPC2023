#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

using namespace std;

void iLoveRecursion(int n){
    
    if(n > 0){
        cout << "I love Recursion"<<endl;
        iLoveRecursion(n-1);
    }
    else return;
}

int main(){
    fast;
    int n;
    cin >> n;
    iLoveRecursion(n);
    return 0;
}