#include <bits/stdc++.h>
#define ll long long
using namespace std;
int sum (vector<int> v, int size){

    if(size == 0){
        return 0;
    }else return v[size-1] + sum(v, size-1);

}
int main(){
    //freopen("W.in", "r", stdin);

    int t, n, aux;

    cin >> t;

    for(int i = 1; i <=t; i++){
        cin >> n;
        vector <int> vi;
        for(int j = 0; j < n; j++){

            cin >> aux;
            vi.push_back(aux);
        }

        cout <<"Case "<<i<<": "<<sum(vi, vi.size())<<endl;
    }
}
