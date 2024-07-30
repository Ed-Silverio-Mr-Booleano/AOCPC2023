#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr);

using namespace std;

int main() {
    fast;
    int a, b;
    cin>>a>>b;
    cout <<max({(a*b), (a+b), (a-b)});
    return 0;
}