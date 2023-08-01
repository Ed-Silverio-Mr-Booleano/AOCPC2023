#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)

using namespace std;
double t = 0;
int c= 0;

double avgVector(double v[], int s) {
    if(s < 1) return t/c;
    else{
        t += v[s-1];
        c++;
        return avgVector(v, s-1);
    }
}
int main(){
    fast;
    freopen("S.in", "r", stdin);
    int n;cin>>n;
    double v[n];

    for (int i = 0; i < n; i++)
        cin>>v[i];

    cout << setprecision(6)<<fixed<<avgVector(v, n)<< endl;

    return 0;
}