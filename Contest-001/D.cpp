#include <bits/stdc++.h>
#define ll long long
using namespace std;

int contarTuplas(int N) {
    int count = 0;

    for (int A = 1; A <= N; A++) {
        for (int B = 1; B <= N; B++) {
            int C = N - A * B;
            if (C > 0) {
                count++;
            } else {
                break;
            }
        }
    }

    return count;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>> n;

    cout << contarTuplas(n)<<endl;


}
