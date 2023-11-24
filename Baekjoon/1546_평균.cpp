#include <bits/stdc++.h>
#define iosnsync                  \
    std::ios::sync_with_stdio(0); \
    std::cin.tie(0);              \
    std::cout.tie(0)

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    iosnsync;

    int N;
    std::cin >> N;

    int max = 0;
    double ctotal = 0;
    std::vector<int> scoreVec(N);

    for (int i = 0; i < N; i++) {
        std::cin >> scoreVec[i];
        if (scoreVec[i] > max)
            max = scoreVec[i];
    }

    for (int i = 0; i < N; i++) {
        ctotal += (double)scoreVec[i] / max * 100;
    }

    std::cout << ctotal / N;

    return 0;
}