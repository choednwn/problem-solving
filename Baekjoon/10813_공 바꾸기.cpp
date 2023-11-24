#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;

    int basketList[N];
    for (int i = 0; i < N; i++) {
        basketList[i] = i + 1;
    }

    for (int i = 0; i < M; i++) {
        int I, J, buff;
        std::cin >> I >> J;

        if (I != J) {
            buff = basketList[J - 1];
            basketList[J - 1] = basketList[I - 1];
            basketList[I - 1] = buff;
        }
    }

    for (int i = 0; i < N; i++) {
        std::cout << basketList[i] << " ";
    }

    return 0;
}