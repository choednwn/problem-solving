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

    int N;
    std::cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < 1 + 2 * i; j++) {
            std::cout << "*";
        }
        nline;
    }
    for (int i = N - 2; i > 0; i--) {
        for (int j = 0; j < N - i - 1; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < 1 + 2 * i; j++) {
            std::cout << "*";
        }
        nline;
    }

    return 0;
}
