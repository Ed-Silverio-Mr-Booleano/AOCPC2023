#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i < n; i++){
            cin >> a[i];
        }
        bool sorted = false;
        int op = 0;
        int mPos = 0;
        int last = n-1;
        while(!sorted){
            int c = 0;
            for(int i=0; i < n; i++){
                if(a[i] != -1){
                    if(a[i-1] > a[i])
                        c++;
                } else break;
                if(a[i] >= a[mPos])
                    mPos = i;
            }
            if(c == 0) {
                sorted = true;
                break;
            }
            else {
                sorted = false;
                if(mPos == last){
                    a[last] = -1;
                    last--;
                } else {
                    op = a[mPos];
                    break;
                }
            }
        }
        cout << op << endl;        
    }

}