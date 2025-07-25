// NeuralEdge - Entry Point
#include <iostream>
#include <string>
#include "uci.h"

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string input;
    while (std::getline(std::cin, input)) {
        if (!input.empty()) {
            handleUCICommand(input);
        }
    }
    return 0;
}
