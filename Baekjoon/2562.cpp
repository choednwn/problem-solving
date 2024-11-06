#include <iostream>

int main() {
    int max = 0, loc = 0;

    for (int i = 0; i < 9; i++) {
        int input;
        std::cin >> input;

        if (input > max) {
            max = input;
            loc = i + 1;
        }
    }

    std::cout << max << "\n" << loc;
    return 0;
}