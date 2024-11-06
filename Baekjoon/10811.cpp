#include <bits/stdc++.h>
#define iosnsync                  \
    std::ios::sync_with_stdio(0); \
    std::cin.tie(NULL);           \
    std::cout.tie(NULL)

void swap(std::vector<int> &vec, int i, int j) {
    int tmp = vec[i];
    vec[i] = vec[j];
    vec[j] = tmp;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    iosnsync;

    int N, M;
    std::cin >> N >> M;

    std::vector<int> baskets(N);
    for (int i = 0; i < N; i++) {
        baskets[i] = i + 1;
    }

    while (M--) {
        int I, J;
        std::cin >> I >> J;

        for (int i = 0; i < (J - I + 1) / 2; i++) {
            swap(baskets, I - 1 + i, J - 1 - i);
        }
    }

    for (int i = 0; i < N; i++) {
        std::cout << baskets[i] << " ";
    }
    return 0;
}