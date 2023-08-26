#include <bits/stdc++.h>

using namespace std;

int main(){

    set<string> pokemons;
    int n;
    cin>>n;
    while(n--){
        string pk;
        cin>>pk;

        pokemons.insert(pk);
    }

    int pk = 151 - pokemons.size();
    cout <<"Falta(m) "<< pk << " pomekon(s)." <<endl;
    return 0;
}