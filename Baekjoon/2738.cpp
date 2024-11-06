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

    int N, M;
    cin >> N >> M;

    vector<int> matrix(N * M);

    for (int i = 0; i < N * M; i++) {
        cin >> matrix[i];
    }

    for (int i = 0; i < N * M; i++) {
        int I;
        cin >> I;
        matrix[i] += I;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << matrix[i * M + j] << " ";
        }
        nline;
    }

    return 0;
}