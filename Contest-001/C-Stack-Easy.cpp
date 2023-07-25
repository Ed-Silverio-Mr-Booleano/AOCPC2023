#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("C.in", "r", stdin);


    stack<int> pilha;
    ll t, op;

    cin >> t;


    while(t--){
        cin >> op;

        if(op == 1){
           int n;
           cin >> n;
           pilha.push(n);
        }else if(op == 2){
            if(!pilha.empty()) pilha.pop();

        }else{
            if(!pilha.empty()) cout <<pilha.top()<<endl;
            else cout <<"Empty!"<<endl;
        }

    }

return 0;


}
