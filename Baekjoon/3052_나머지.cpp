#include <iostream>
#include <set>

int main() {
    std::set<int> sepValSet;

    for (int i = 0; i < 10; i++) {
        int input;
        std::cin >> input;

        sepValSet.insert(input % 42);
    }

    std::cout << sepValSet.size();
    return 0;
}