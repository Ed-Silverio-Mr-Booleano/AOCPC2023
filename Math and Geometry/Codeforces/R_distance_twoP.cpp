#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)

using namespace std;

int main(){
    fast;
    //freopen("R.in", "r", stdin);

    double x1,y1, x2, y2, d;

    cin>>x1>>y1>>x2>>y2;
    d =  sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
    cout<<fixed<<setprecision(9);
    cout <<d<<endl;
}