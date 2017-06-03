#include <iostream>
#include "Cell_automat.h"

int main() {
    int number;
    std::cout << "请输入空间大小" << std::endl;
    std::cin >> number;
    Cell_automat cell(number);
    std::cout << "请输入初始状态中存活的细胞的坐标，以-1，-1结束"  << endl;

    cell.init();
    cell.display();
    return 0;
}