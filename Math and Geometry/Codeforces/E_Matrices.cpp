#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define tamMax 100
#define tamMin 1

using namespace std;

int main(){
    fast;
    //freopen("E.in", "r", stdin);
    int ra, ca, rb,cb;
    
    
    int mc[tamMin][tamMax];
    
    
    cin>>ra>>ca;
    int ma[ra][ca];
    for(int i = 0; i < ra; ++i )
        for(int j = 0; j < ca; ++j) // O(ra) * O(ca)
            cin>> ma[i][j];

    cin>>rb>>cb;
    int mb[rb][cb];
    for(int i = 0; i < rb; ++i )
        for(int j = 0; j < cb; ++j) // O(ra) * O(ca)
            cin>> mb[i][j];

    for(int i = 0;i < ra; ++i){
        int s = 0;
        for(int j = 0; j <cb; ++j){
            
            for(int k = 0; k <ca; k++){
                s += ma[i][k] * mb[k][j];
            }
                
            mc[i][j] = s;
            cout<< mc[i][j] << " ";
            s = 0;
            
    
        }
        cout<<endl;    

    }    
        
            

        
    return 0;
}