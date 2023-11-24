#include <bits/stdc++.h>
#define iosnsync                  \
    std::ios::sync_with_stdio(0); \
    std::cin.tie(0);              \
    std::cout.tie(0)
#define nline cout << "\n"
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    iosnsync;

    array<string, 5> words;

    for (int i = 0; i < 5; i++) {
        cin >> words[i];
    }

    for (int i = 0; i < 15; i++) {
        for (auto s : words) {
            if (i < s.size())
                cout << s[i];
        }
    }

    return 0;
}
