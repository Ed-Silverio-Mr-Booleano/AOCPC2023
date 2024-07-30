#include <bits/stdc++.h>
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)

using namespace std;

int solve(const string& s) {
    int time = 2;
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == s[i - 1]) {
            time += 1;
        } else {
            time += 2;
        }
    }
    return time;
}

void password(const vector<string>& test_cases) {
    for (const string& s : test_cases) {
        int max_time = -1;
        string best_string;
        for (int i = 0; i <= s.size(); ++i) {
            for (char c = 'a'; c <= 'z'; ++c) {
                string new_string = s.substr(0, i) + c + s.substr(i);
                int new_time = solve(new_string);

                if (new_time > max_time) {
                    max_time = new_time;
                    best_string = new_string;
                }
            }
        }
        cout << best_string << endl;
    }
}

int main() {
    fast;
    int t;
    cin >> t;
    vector<string> pass(t);

    for (int i = 0; i < t; ++i) {
        cin >> pass[i];
    }

    password(pass);

    return 0;
}
