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
    std::getline(std::cin, S);

    if (S.front() == ' ')
        S.erase(0, 1);
    if (S.back() == ' ')
        S.pop_back();

    int is_letter = 0;
    int space_cnt = 0;
    for (char letter : S) {
        if (letter == ' ')
            space_cnt++;
        else if (letter != ' ')
            is_letter = 1;
    }

    std::cout << space_cnt + is_letter;

    return 0;
}