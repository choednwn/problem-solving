#include <iostream>
#include <set>

int main() {
    std::set<int> studentSet;
    for (int i = 0; i < 30; i++) {
        studentSet.insert(i + 1);
    }

    for (int i = 0; i < 28; i++) {
        int input;
        std::cin >> input;
        studentSet.erase(input);
    }

    for (std::set<int>::iterator it = studentSet.begin(); it != studentSet.end(); it++) {
        std::cout << *it << std::endl;
    }
}