//
// Created by Administrator on 2017/6/3.
//

#include "Cell_automat.h"
#include <windows.h>
#include <iostream>

Cell_automat::Cell_automat(int number){
    Cell_automat::SizeofBox = number;
    Cell_automat::cell_map = std::vector<std::vector<bool> >(number + 2,std::vector<bool>(number + 2,false));
}
void Cell_automat::init(std::vector<std::pair<int, int>> &input){
    for(auto my_pair:input)
        Cell_automat::cell_map[my_pair.first + 1][my_pair.second + 1] = true;
}
void Cell_automat::display(){
    while(true){
        system("cls");
        for(int i = 1;i < Cell_automat::SizeofBox + 1;i++){
            for(int j = 1;j < Cell_automat::SizeofBox + 1;j++){
                if(Cell_automat::cell_map[i][j]==false)
                    std::cout << ' ';
                else
                    std::cout << '*';
                if(j == Cell_automat::SizeofBox)
                    std::cout << std::endl;
            }
        }
        Sleep(500);
        Cell_automat::update();
    }
}

void Cell_automat::update(){
    std::vector<std::vector<bool>> new_cell_map(Cell_automat::SizeofBox + 2,std::vector<bool>(Cell_automat::SizeofBox + 2,0));
    for(int i = 0;i<Cell_automat::SizeofBox;i++) {
        for (int j = 0; j < Cell_automat::SizeofBox; j++) {
            int alive_number = Cell_automat::count_around_alive(i, j);
            if (alive_number == 3)
                new_cell_map[i][j] = true;
            else if (alive_number == 2)
                new_cell_map[i][j] = Cell_automat::cell_map[i][j];
            else
                new_cell_map[i][j] = false;
        }
    }
    for(int i = 1;i<Cell_automat::SizeofBox + 1;i++)
        for(int j = 1;j<Cell_automat::SizeofBox + 1;j++)
            Cell_automat::cell_map[i][j] = new_cell_map[i][j];
}

int Cell_automat::count_around_alive(int x, int y){
    x += 1;
    y += 1;
    int sum = Cell_automat::cell_map[x - 1][y - 1] + Cell_automat::cell_map[x][y - 1] + Cell_automat::cell_map[x + 1][y - 1]
                + Cell_automat::cell_map[x - 1][y] + Cell_automat::cell_map[x + 1][y]
                + Cell_automat::cell_map[x - 1][y + 1] + Cell_automat::cell_map[x][y + 1] + Cell_automat::cell_map[x + 1][y + 1];
    return sum;
}