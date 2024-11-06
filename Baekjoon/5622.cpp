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

    int time = 0;
    int dial[8] = {3, 6, 9, 12, 15, 19, 22, 26};

    std::string alph;
    std::cin >> alph;

    for (char letter : alph) {
        for (int i = 0; i < 8; i++) {
            if (static_cast<int>(letter) - 64 <= dial[i]) {
                time += i + 3;
                break;
            }
        }
    }

    std::cout << time;

    return 0;
}