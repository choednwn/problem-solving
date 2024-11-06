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

    int A, B, nA = 0, nB = 0;
    std::cin >> A >> B;

    for (int i = 2; i >= 0; i--) {
        nA += (A % 10) * std::pow(10, i);
        nB += (B % 10) * std::pow(10, i);

        A /= 10;
        B /= 10;
    }

    if (nA >= nB)
        std::cout << nA;
    else
        std::cout << nB;

    return 0;
}