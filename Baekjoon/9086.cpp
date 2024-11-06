#include <bits/stdc++.h>
#define iosnsync                  \
    std::ios::sync_with_stdio(0); \
    std::cin.tie(0);              \
    std::cout.tie(0)
#define nline std::cout << "\n"  // new line for debugging

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    iosnsync;

    int T;
    std::cin >> T;

    for (int i = 0; i < T; i++) {
        std::string word;
        std::cin >> word;
        std::cout << word.front() << word.back() << "\n";
    }
    return 0;
}