// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)


void build(vector<int> candidate, int i, int n){
    if(i > n){
        for(int p : candidate) cout <<p<< " ";
        cout <<endl;
    }
    for(int j = 1; j <=n; ++j){
        bool notUsed = true;
        for(int p: candidate)
           if(p == j) notUsed = false;
        
        if(notUsed){
            candidate.push_back(j);
            build(candidate, i+1, n);
            candidate.pop_back();
        }
    }
}

int main() {
    
    build({}, 1, 3);
    return 0;
}