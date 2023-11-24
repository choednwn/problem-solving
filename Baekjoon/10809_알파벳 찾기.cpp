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

    std::string S;
    std::cin >> S;

    std::array<int, 26> alphArr;

    for (int i = 0; i < 26; i++) {
        alphArr[i] = S.find_first_of(static_cast<char>(i + 97));
    }

    for (int cnt : alphArr) {
        std::cout << cnt << " ";
    }

    return 0;
}