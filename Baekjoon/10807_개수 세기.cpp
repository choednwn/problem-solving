#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> nVec(N);
    for (int i = 0; i < N; i++) {
        std::cin >> nVec[i];
    }

    int v;
    std::cin >> v;

    int v_count = 0;
    for (int i = 0; i < N; i++) {
        if (nVec[i] == v)
            v_count++;
    }

    std::cout << v_count;
}