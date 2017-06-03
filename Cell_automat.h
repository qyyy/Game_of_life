//
// Created by Administrator on 2017/6/3.
//
#include <vector>

#ifndef GAME_OF_LIFE_CELL_AUTOMAT_H
#define GAME_OF_LIFE_CELL_AUTOMAT_H


class Cell_automat {
public:
    Cell_automat(int number);
    void init(std::vector<std::pair<int, int>> &input);
    void display();
private:
    std::vector<std::vector<bool>> cell_map;
    int SizeofBox;
    void update();
    int count_around_alive(int x, int y);
};

#endif //GAME_OF_LIFE_CELL_AUTOMAT_H
