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

    while (1) {
        std::string S;
        std::getline(std::cin, S);
        std::cout << S << "\n";

        if (std::cin.eof())
            break;
    }

    return 0;
}