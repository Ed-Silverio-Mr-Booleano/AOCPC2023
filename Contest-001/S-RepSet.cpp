
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    //freopen("W.in", "r", stdin);
    int k, t = 0;
    bool it = false;
    int limit = pow(10, 6);
    cin >> k;
    for(int i =1; i <=limit; i++){
        t = (t*10+7)%k;

        if(t == 0){
            it = true;
            cout << i<< endl;
            break;
        }

    }
    if(!it) cout <<-1<<endl;

}

