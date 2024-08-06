#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;

int main() {
    fast;
    int t;
    cin >> t;

    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        
        int S = 0;
        int sc[2] = {a1, a2};
        int bc[2] = {b1, b2};

        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                int suW = 0;
                int slW = 0;
                
                // round 1
                if (sc[i] > bc[j]) suW++;
                else if (sc[i] < bc[j]) slW++;
                
                // round 2
                if (sc[1 - i] > bc[1 - j]) suW++;
                else if (sc[1 - i] < bc[1 - j]) slW++;
                
                if (suW > slW) {
                    S++;
                }
            }
        }

        cout << S << endl;
    }

    return 0;
}
