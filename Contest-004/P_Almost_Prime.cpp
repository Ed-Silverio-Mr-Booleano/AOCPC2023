#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)

using namespace std;

bool isPrime(int n){
    if(n <2) return false;

    for(int i = 2; i*i <=n; i++){
        if(n%i == 0) return false;
    }
    return true;
} // O(sqrt(N))

int main(){
    fast;
    freopen("P.in", "r", stdin);

    int n, count = 0, alp = 0;

    cin >> n;

    for(int i = 2; i<=n; i++){ // O(N* log(n)) + O(sqrt(N))
        count = 0;
        for(int  j = 2; j<= i; j++)
        if(isPrime(j))
            if(i%j == 0) count++;
        
        if(count == 2) alp++;
        
    }
    cout <<alp<<endl;

    return 0;

}