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

    std::array<int, 81> grid;
    std::pair<int, int> max;  // pos, val

    for (int i = 0; i < 81; i++) {
        int inp;
        cin >> inp;
        grid[i] = inp;

        if (i == 0)
            max = {i, inp};
    }

    for (int i = 0; i < 81; i++) {
        if (grid[i] > max.second) {
            max.first = i;
            max.second = grid[i];
        }
    }

    cout << max.second << "\n";
    cout << max.first / 9 + 1 << " " << max.first % 9 + 1;

    return 0;
}