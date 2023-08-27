#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr);
using namespace std;

const int N = 100005;

vector<pair<int, int>> adj[N]; 

bool visited[N];

int maxTotalLength = 0; 

void dfs(int town, int currentLength) {
    visited[town] = true;
    maxTotalLength = max(maxTotalLength, currentLength);
    for (auto neighbor : adj[town]) {
        int nextTown = neighbor.first;
        int roadLength = neighbor.second;

        if (!visited[nextTown]) {
            dfs(nextTown, currentLength + roadLength);
        }
    }

    visited[town] = false;
}

int main() {
    fast;
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; ++i) {
        int A, B, C;
        cin >> A >> B >> C;
        adj[A].emplace_back(B, C);
        adj[B].emplace_back(A, C);
    }

    for (int i = 1; i <= N; ++i) {
        dfs(i, 0);
    }

    cout << maxTotalLength << endl;

    return 0;
}
