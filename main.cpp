#include <iostream>
#include "Cell_automat.h"

int main() {
    int number;
    std::cout << "Please input the space size:" << std::endl;
    std::cin >> number;
    Cell_automat cell(number);
    std::cout << "Please input the location(x,y) of the alive cell, input (-1,-1) to finish:"  << std::endl;
    std::vector<std::pair<int, int>> input;
    bool flag = true;
    int x, y;
    while(flag) {
        std::cin >> x >> y;
        if(x < 0 || y < 0)
            flag = false;
        else
            input.push_back(std::make_pair(x, y));
    }
    cell.init(input);
    cell.display();
    return 0;
}