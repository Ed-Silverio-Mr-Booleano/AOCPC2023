#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, c = 0;
    cin>>n;
    //vector<int> a(n+1, 0);
    set<int> a;
    int ai;

    for(int i = 1; i <=n; ++i){
        cin>>ai;
        if(a.find(ai) == a.end()){
            a.insert(ai);
            c++;
        }
    }

    cout<<c<<endl;
        
    return 0;
}