#include <bits/stdc++.h>
#define vii vector<pair<int, int>> 
#define vi vector<int>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define all(c) (c).begin(), (c).end()
#define MAX 20000

using namespace std;

int n;
vi a(MAX+1, -1);
int l = INT_MAX, r = 0;


int main(){

    cin>>n;
    for(int i = 0; i <n; ++i){
        int aux;
        cin>> aux;
        if(a[aux] == -1)
            a[aux] = 1;
        r = max(r, aux);
    }
    for(int j = 0; j <=MAX; ++j){
        if(a[j] == -1){
            cout <<j<<endl;
            break;
        }
    }
    
    return 0;
}