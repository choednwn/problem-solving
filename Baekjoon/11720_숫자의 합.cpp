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

    int N, total = 0;
    std::string V;
    std::cin >> N >> V;

    for (int i = 0; i < N; i++) {
        total += V[i] - '0';
    }

    std::cout << total;

    return 0;
}