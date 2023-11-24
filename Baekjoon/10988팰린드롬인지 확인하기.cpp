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

    int isPalindrome = 1;
    std::string S;
    std::cin >> S;

    int rHalfSt = S.length() % 2 ? S.length() / 2 + 1 : S.length() / 2;
    std::string rHalf = S.substr(rHalfSt, S.length() - rHalfSt);
    std::reverse(rHalf.begin(), rHalf.end());

    for (int i = 0; i < rHalf.length(); i++) {
        if (S[i] != rHalf[i])
            isPalindrome = 0;
    }

    std::cout << isPalindrome;

    return 0;
}