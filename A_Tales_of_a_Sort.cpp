#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)

using namespace std;
bool flag = false;
bool isSorted(int a[], int s){
    for(int i = 0; i< s ; ++i){
        if(a[i]<= a[i+1]) flag = true;
        else break;
    }
    return flag;
}

bool isZered(int a[], int s){
    for(int i = 0; i< s; ++i){
        if(a[i] == 0) flag = true;
        else break;
    }
    return flag;
}



int main(){
    fast;
    freopen("A.in", "r", stdin);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];

        for(int i = 0; i < n; ++i)
         cin>> a[i];

         if(isSorted(a, n)){
            cout <<0<<endl;
            flag = false;
         }
         else{
            int j = 0;
            int c = 0;
            while(!isZered(a, n)){
                
                if( a[j] != 0) {
                    a[j] = max(0, a[j]-1);
                    c++;
                }
                
                j++;
                if(j > n ) j = 0;
                
            }
            cout <<c<<endl;
         }

    }

    return 0;
}