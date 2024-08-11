#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

int op(int n) {
    int ops = 0;
    while (n > 0) {
        if (n % 3 == 0) {
            n = n / 3;
        } else {
            n = n - 1;
        }
        ops++;
    }
    return ops;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int tOp = 0;
        for (int i = l; i <= r; i++) {
            tOp += op(i);
        }
        cout <<tOp<< endl;
    }
    return 0;
}
