#include <bits/stdc++.h>
#define iosnsync                  \
    std::ios::sync_with_stdio(0); \
    std::cin.tie(0);              \
    std::cout.tie(0)
#define nline cout << "\n"
using namespace std;

int calcChangeAmt(vector<string> &ucb, int sv, int sh);

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    iosnsync;

    int N, M;
    cin >> N >> M;

    int minChange = N * M;
    vector<string> ucb(N);  // uncut board

    // fill vector<string> unCB
    for (int i = 0; i < N; i++) {
        cin >> ucb[i];
    }

    // check each board
    for (int n = 0; n < N - 8 + 1; n++) {
        for (int m = 0; m < M - 8 + 1; m++) {
            int changeAmt = calcChangeAmt(ucb, n, m);

            if (changeAmt < minChange)
                minChange = changeAmt;
        }
    }

    cout << minChange;

    return 0;
}

int calcChangeAmt(vector<string> &ucb, int sv, int sh) {
    int wbCnt[2] = {0, 0};

    for (int i = 0; i < 2; i++) {
        char tileChar = i ? 'W' : 'B';

        for (int n = sv; n < sv + 8; n++) {
            for (int m = sh; m < sh + 8; m++) {
                if (ucb[n][m] != tileChar) {
                    wbCnt[i]++;
                }
                tileChar = (tileChar == 'W') ? 'B' : 'W';
            }
            // changes next line first tile
            tileChar = (tileChar == 'W') ? 'B' : 'W';
        }
    }

    return wbCnt[0] >= wbCnt[1] ? wbCnt[1] : wbCnt[0];
}