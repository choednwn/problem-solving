#include <iostream>
#include <vector>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> basketVec(N);

    for (int i = 0; i < M; i++) {
        int I, J, K;
        std::cin >> I >> J >> K;

        for (int j = 0; j < 1 + J - I; j++) {
            basketVec[I - 1 + j] = K;
        }
    }

    for (int i = 0; i < N; i++) {
        std::cout << basketVec[i] << " ";
    }

    return 0;
}