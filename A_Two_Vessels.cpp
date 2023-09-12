#include <iostream>
#include <algorithm>

using namespace std;

int solve(int a, int b, int c) {
    if (a > b) {
        swap(a, b); 
    }

    if (a == b) {
        return 0;
    }

    int moves = 0; 

    while (a != b) {
        if (b - a > c) {
            a += c;
        } else {
            a = b;
        }
        moves++;
    }

    return moves;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int result = solve(a, b, c);
        cout << result << endl;
    }

    return 0;
}
