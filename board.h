#ifndef BOARD_H
#define BOARD_H
#include <string>

class Board {
public:
    void loadFEN(const std::string& fen);
    void print();
};

#endif
