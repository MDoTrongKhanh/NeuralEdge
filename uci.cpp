#include "uci.h"
#include <iostream>
#include <cstdlib>

void handleUCICommand(const std::string& command) {
    if (command == "uci") {
        std::cout << "id name NeuralEdge\n";
        std::cout << "id author Trong Khanh & ChatGPT\n";
        std::cout << "uciok\n";
    } else if (command == "isready") {
        std::cout << "readyok\n";
    } else if (command == "quit") {
        exit(0);
    } else if (command == "ucinewgame") {
        // Reset internal state if needed
    } else {
        // TODO: Handle more commands
    }
}
