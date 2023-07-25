#include <bits/stdc++.h>
#define MAX 100000000
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;
vector<bool> prime(MAX+1, true);
int main(){

    fast;
    //freopen("output.out", "w", stdout);

    prime[1] = false;
    ll count = 1;

    for(ll i = 2; i*i <= MAX; i++){
        if(prime[i]){
            for(ll j = i*i; j <=MAX; j+=i)
                prime[j] = false; 

            if(count == 1 ){
                cout << i <<endl;
                count = 1;
            }else if(count > 100){
                cout << i <<endl;
                count = 1;
            }
            count++;   
        }
            
    } //O(log(logn))


    for(ll i = 10001; i <MAX; i+=2){//O(N) + O(log(logn))
        if(prime[i]){
            if(count%100 == 1) cout << i <<endl;
            count++;
        }

    }

    return 0;

}

/*
        */