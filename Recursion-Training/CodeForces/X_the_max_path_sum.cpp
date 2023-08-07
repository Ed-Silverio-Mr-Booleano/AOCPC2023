#include <iostream>
#include <vector>
#include <algorithm>

int N, M;
std::vector<std::vector<int>> A;

int maxSum(int i, int j) {
    // Verifica se chegou à célula AN,M
    if (i == N - 1 && j == M - 1) {
        return A[i][j];
    }

    // Calcula a soma máxima das duas opções
    int rightSum = (j + 1 < M) ? maxSum(i, j + 1) : 0;
    int downSum = (i + 1 < N) ? maxSum(i + 1, j) : 0;

    return A[i][j] + std::max(rightSum, downSum);
}

int main() {
    freopen("X.in", "r", stdin);
    std::cin >> N >> M;
    A.resize(N, std::vector<int>(M));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cin >> A[i][j];
        }
    }

    int maxum = maxSum(0, 0);
    std::cout << maxum << std::endl;

    return 0;
}