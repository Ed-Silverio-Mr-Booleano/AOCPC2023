#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false)

using namespace std;

int main(){
    fast;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int coef = 1;
        for(int j = 0; j <= i; j++){
            cout << coef <<" ";
            coef = coef * (i-j)/(j+1);
            
        }
        cout<<endl;
    }
}