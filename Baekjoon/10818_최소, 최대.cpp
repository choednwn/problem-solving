#include <iostream>

int main() {
    int min, max;
    int N;
    std::cin >> N;

    for (int i = 0; i < N; i++) {
        int input;
        std::cin >> input;

        if (i == 0) {
            min = input;
            max = input;
        } else {
            if (input > max)
                max = input;
            else if (input < min)
                min = input;
        }
    }

    std::cout << min << " " << max;

    return 0;
}