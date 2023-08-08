#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr)


using namespace std;
int N, M;
vector<vector<int>> A;

int maxSum(int i, int j) {

    if (i == N - 1 && j == M - 1) {
        return A[i][j];
    }

    int r = (j + 1 < M) ? maxSum(i, j + 1) : INT_MIN;
    int d = (i + 1 < N) ? maxSum(i + 1, j) : INT_MIN;

    return A[i][j] + max(r, d);
}

int main() {
    fast;
    //freopen("X.in", "r", stdin);
    cin >> N >> M;
    A.resize(N, vector<int>(M));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> A[i][j];
        }
    }

    int maxum = maxSum(0, 0);
    cout << maxum <<endl;

    return 0;
}