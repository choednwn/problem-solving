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

    int T;
    std::cin >> T;

    while (T--) {
        int R;
        std::string S;
        std::cin >> R >> S;

        for (char letter : S) {
            for (int i = 0; i < R; i++) {
                std::cout << letter;
            }
        }
        nline;
    }

    return 0;
}