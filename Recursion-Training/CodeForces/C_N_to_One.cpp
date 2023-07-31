#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)


using namespace std;

void printN(int n){
    if(n <= 0) return;
    else{
        if(n != 1){
            cout <<n<< " ";
        }else{
            cout<<n<<endl;
        }
        printN(n-1);
    }
}

int main(){
    fast;
    freopen("C.in", "r", stdin);

    int a;
    cin >> a;
    printN(a);
    return 0;
}