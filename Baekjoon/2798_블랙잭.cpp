#include <bits/stdc++.h>
#define iosnsync                  \
    std::ios::sync_with_stdio(0); \
    std::cin.tie(0);              \
    std::cout.tie(0)
#define nline std::cout << "\n"

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    iosnsync;

    int N, M;
    int larLow = 0;
    int max = 0;

    std::cin >> N >> M;
    std::vector<int> cards(N);

    for (int i = 0; i < N; i++) {
        std::cin >> cards[i];
    }
    std::sort(cards.begin(), cards.end());

    for (auto i : cards) {
        if (i >= M)
            break;
        larLow++;
    }

    for (int i = 0; i < larLow - 2; i++) {
        for (int j = i + 1; j < larLow - 1; j++) {
            for (int k = j + 1; k < larLow; k++) {
                int sum = cards[i] + cards[j] + cards[k];
                if (sum > M)
                    break;
                if (sum > max)
                    max = sum;
            }
        }
    }

    std::cout << max;

    return 0;
}