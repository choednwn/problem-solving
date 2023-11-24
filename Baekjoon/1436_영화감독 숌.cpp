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

    int V = 666;
    int N;
    cin >> N;

    while (1) {
        string vToS = to_string(V);

        if (vToS.find("666") != string::npos) {
            N--;

            if (N == 0) {
                break;
            }
        }
        V++;
    }
    cout << V;

    return 0;
}