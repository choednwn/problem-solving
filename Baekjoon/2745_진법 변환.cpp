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

    string value;
    int N;
    cin >> value >> N;

    reverse(value.begin(), value.end());

    int convtVal = 0;
    for (int i = 0; i < value.length(); i++) {
        int c = static_cast<int>(value[i]) - 48;
        c = c <= 9 ? c : c - 7;

        convtVal += c * pow(N, i);
    }
    cout << convtVal;

    return 0;
}