#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define MAX 1000000

using namespace std;

vector<bool> isPrime(MAX+1, true);

void fillPrime(){
      for(int i =2; i*i <=MAX; i++)
        if(isPrime[i])
            for(int j = i*i ; j<=MAX; j+=i)
                isPrime[j] = false;
}
ll cDivisors(ll n){
    ll c = 0;
    for(ll i = 1; i*i <= n; i++){
        if(n%i == 0){
            c++;
            if(n/i != i) c++;
        }
    }
    return c;

}
void fillTprime(){
    for (int i = 1; i <=MAX; i++){
        if(cDivisors(i) == 3) continue;
        else isPrime[i] = false;
    }       
}
int main(){
    fast;

    //cout<<cDivisors(5)<<endl;
    freopen("N.in", "r", stdin);
  
 
    int n; cin >> n;

    for (int i = 1; i <=MAX; i++){
        if(cDivisors(i) == 3) continue;
        else isPrime[i] = false;
    }
    while(n--){
        ll x; cin>>x;
        if(isPrime[x]) cout <<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}