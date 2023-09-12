#include <bits/stdc++.h>
using namespace std;

int n, m;


bool areSetsEqualWithOrder(const unordered_set<char>& set1, const unordered_set<char>& set2) {
    if (set1.size() != set2.size()) {
        return false;
    }

    auto it1 = set1.begin();
    auto it2 = set2.begin();

    while (it1 != set1.end() && it2 != set2.end()) {
        if (*it1 != *it2) {
            return false;
        }
        ++it1;
        ++it2;
    }

    return true;
}

bool isVika(char name[20][20]) {
    unordered_set<char> vika;
    set<char> v = {'v', 'i', 'k', 'a'};

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (name[i][j] == 'v' || name[i][j] == 'i' || name[i][j] == 'k' || name[i][j] == 'a') {
                vika.insert(name[i][j]);
            }
        }
    }

    return areSetsEqualWithOrder(v, vika);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        cin >> n >> m;
        char name[20][20];

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> name[i][j];
            }
        }

        cout << (isVika(name) ? "YES" : "NO") << endl;
    }

    return 0;
}
