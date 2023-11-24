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

    int area = 0;
    array<int, 10000> grid;
    grid.fill(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int lx, ly;
        cin >> lx >> ly;

        for (int y = ly; y < ly + 10; y++) {
            for (int x = lx; x < lx + 10; x++) {
                grid[y * 100 + x] = 1;
            }
        }
    }

    for (auto filled : grid) {
        if (filled)
            area++;
    }
    cout << area;

    return 0;
}