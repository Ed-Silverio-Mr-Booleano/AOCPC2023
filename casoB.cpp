#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(NULL)
#define endl '\n'

using namespace std;

int index(const vector<int>& A) {
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int index1 = -1;
    int index2 = -1;

    for (int i = 0; i < A.size(); ++i) {
        if (A[i] > max1) {
            max2 = max1;
            index2 = index1;
            max1 = A[i];
            index1 = i;
        } else if (A[i] > max2) {
            max2 = A[i];
            index2 = i;
        }
    }
    
    return index2;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }
    
    int i = index(A);
    cout << i+1 <<endl;

    return 0;
}
