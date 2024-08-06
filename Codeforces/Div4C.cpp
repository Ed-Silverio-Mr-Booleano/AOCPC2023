#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        vector<pair<int, int>> intervals(n);
        for (int i = 0; i < n; ++i) {
            cin >> intervals[i].first >> intervals[i].second;
        }
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq(intervals.begin(), intervals.end());
        
        int last_end = 0;
        bool can_shower = false;
        
        while (!pq.empty()) {
            auto interval = pq.top();
            pq.pop();
            int l = interval.first;
            int r = interval.second;
            
            if (l - last_end >= s) {
                can_shower = true;
                break;
            }
            
            last_end = max(last_end, r);
        }
        
        if (m - last_end >= s) {
            can_shower = true;
        }
        
        cout << (can_shower ? "YES" : "NO") << endl;
    }
    return 0;
}
