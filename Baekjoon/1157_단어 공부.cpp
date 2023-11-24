#include <bits/stdc++.h>
#define iosnsync                  \
    std::ios::sync_with_stdio(0); \
    std::cin.tie(0);              \
    std::cout.tie(0)
#define nline std::cout << "\n"
#define fst first
#define snd second

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    iosnsync;

    std::string S;
    std::cin >> S;
    std::transform(S.begin(), S.end(), S.begin(), [](unsigned char c) { return std::toupper(c); });

    std::set<std::pair<char, int>> sChars;

    for (auto c : S) {
        sChars.insert(std::make_pair(c, 0));
    }

    for (auto c : sChars) {
        for (int i = 0; i < S.length(); i++) {
        
        }
    }

    return 0;
}