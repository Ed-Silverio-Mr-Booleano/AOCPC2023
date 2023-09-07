#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);

    // Read array elements
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    unordered_map<int, int> indices;

    for (int i = 0; i < n; ++i) {
        int complement = x - a[i];

        // Check if the complement value exists in the indices map
        if (indices.find(complement) != indices.end()) {
            cout << indices[complement] + 1 << " " << i + 1 << endl;
            return 0;
        }

        // Store the current value and its index in the map
        indices[a[i]] = i;
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}
