#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    freopen("B.in", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n, x, a, b, m;
    cin>> t;


    while(t--){
        cin >> n;
        for(int i = 1, j =1; i <=n ; i++){
            cin>> a>>b;
            if(a <= 10){
                /*x = max(b, l);
                p = i;
                l = b;*/

                if(j == 1){
                    m = b, x = i;
                    j++;
                }
                else if(b > m){
                    m = b;
                    x = i;
                }
            }
        }


      cout << x<<endl;

    }
return 0;
}

