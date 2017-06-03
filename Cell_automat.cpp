//
// Created by Administrator on 2017/6/3.
//

#include "Cell_automat.h"
#include <windows.h>

Cell_automat::Cell_automat(int number){
    Cell_automat::SizeofBox = number;
    Cell_automat::cell_map = std::vector<std::vector<bool> >(number,std::vector<bool>(number,false));
}
void Cell_automat::init(std::vector<std::pair<int, int>> &input){
    for(auto my_pair:input)
        Cell_automat::cell_map[my_pair.first][my_pair.second] = true;
}
void Cell_automat::display(){
    while(true){
        Sleep(2000);
        //print;
        Cell_automat::update();
    }
}

void Cell_automat::update(){
    std::vector<std::vector<bool>> new_cell_map(Cell_automat::SizeofBox,std::vector<bool>(Cell_automat::SizeofBox,0));
    for(int i=0;i<Cell_automat::SizeofBox;i++) {
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
    for(int i=0;i<Cell_automat::SizeofBox;i++)
        for(int j=0;j<Cell_automat::SizeofBox;j++)
            Cell_automat::cell_map[i][j] = new_cell_map[i][j];
}

bool judge_alive(int x, int y){

}

int count_around_alive(int x, int y){

}