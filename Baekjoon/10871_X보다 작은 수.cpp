#include <iostream>

int main() {
    int N, X;
    std::cin >> N >> X;

    for (int i = 0; i < N; i++) {
        int input;
        std::cin >> input;

        if (input < X) {
            std::cout << input << " ";
        }
    }

    return 0;
}