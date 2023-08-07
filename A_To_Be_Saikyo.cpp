#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)


using namespace std;

int main(){
    fast;
    //freopen("A.in", "r", stdin);
    int n, p, p1, m = 1, m2 = 1;
    bool flag = false;
    cin>>n;
    for(int i = 0; i <n; i++){
        cin>> p;
        if( i == 0) {
            p1 = p;
            m = p;
        }else{

            if( p1 > m) m = p1;
            if(p > m && p1 < p) m = p;
            if( p == p1 ) flag = true;

        }

    }

    if( (m == p1) && (!flag) ) cout <<0<<endl;
    else{
        cout<<m+1-p1<<endl;
    }

    return 0;
}


