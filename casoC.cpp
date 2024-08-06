#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

typedef long long ll;

bool isSub(const vector<ll>& A, ll N, ll M, ll x) {
    ll sum = 0;
    for (int i = 0; i < N; ++i) {
        sum += min(x, A[i]);
        if (sum > M) return false;
    }
    return true;
}

ll solve(const vector<ll>& A, ll N, ll M) {
    ll low = 0;
    ll high = *max_element(A.begin(), A.end());
    ll result = 0;
    
    while (low <= high) {
        ll mid = low + (high - low) / 2;
        if (isSub(A, N, M, mid)) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return result;
}

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N);
    ll sumA = 0;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        sumA += A[i];
    }
    
    if (sumA <= M) {
        cout << "infinite" << endl;
        return 0;
    }
    
    sort(A.begin(), A.end());
    
    ll ma = solve(A, N, M);
    cout << ma << endl;
    
    return 0;
}
