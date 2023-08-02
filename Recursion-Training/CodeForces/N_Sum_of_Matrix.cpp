#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)

using namespace std;
vector<int> v;
int t = 1;
void sumMatrix(int A[], int B[], int s, int c){
    if(s < 1) {
        for(int i = v.size()-1; i >= 0 ; i--){
            cout <<v[i]<<" ";
            if(t == c){
                t = 0;
                cout <<endl;
            }
            t++;
        }
    }else{
        A[s-1] += B[s-1];
        v.push_back(A[s-1]);
        sumMatrix(A, B, s-1, c);
    }
}

int main() {
    fast;
    //freopen("N.in", "r", stdin);
    int r, c;
    cin>>r>>c;
    int A[r*c], B[r*c];
    for(int i =0; i < r*c; i++)
        cin >> A[i];
    for(int i =0; i < r*c; i++)
        cin >> B[i];
    sumMatrix(A, B, r*c, c);
        
    return 0;
}