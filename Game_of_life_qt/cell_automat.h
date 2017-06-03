#ifndef CELL_AUTOMAT_H
#define CELL_AUTOMAT_H
#include <iostream>
#include <vector>

class Cell_automat {
public:
    Cell_automat(int number);
    Cell_automat();
    void init(std::vector<std::pair<int, int>> &input);
    //void display();
    std::vector<std::vector<bool>> update();
private:
    std::vector<std::vector<bool>> cell_map;
    int SizeofBox;
    int count_around_alive(int x, int y);
};

#endif // CELL_AUTOMAT_H
