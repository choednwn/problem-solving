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

    std::array<int, 6> pieces = {1, 1, 2, 2, 2, 8};

    for (auto p : pieces) {
        int curr_amt;
        std::cin >> curr_amt;
        std::cout << p - curr_amt << " ";
    }

    return 0;
}