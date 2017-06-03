#include "gtest/gtest.h"
#include "../main/Cell_automat.h"

TEST(my_first_test, do_test){
    Cell_automat cell(20);
    std::vector<std::pair<int,int> > my_test_vector;
    my_test_vector.push_back(std::make_pair(10,5));
    my_test_vector.push_back(std::make_pair(10,6));
    my_test_vector.push_back(std::make_pair(10,7));
    my_test_vector.push_back(std::make_pair(10,8));
    my_test_vector.push_back(std::make_pair(10,9));
    my_test_vector.push_back(std::make_pair(10,10));
    my_test_vector.push_back(std::make_pair(10,11));
    my_test_vector.push_back(std::make_pair(10,12));
    my_test_vector.push_back(std::make_pair(10,13));
    my_test_vector.push_back(std::make_pair(10,14));
    cell.init(my_test_vector);
    EXPECT_EQ(cell.count_around_alive(10,4),1);
    EXPECT_EQ(cell.count_around_alive(10,5),1);
    EXPECT_EQ(cell.count_around_alive(10,6),2);
    EXPECT_EQ(cell.count_around_alive(9,5),2);
    EXPECT_EQ(cell.count_around_alive(9,4),1);
    EXPECT_EQ(cell.count_around_alive(9,6),3);
    EXPECT_EQ(cell.count_around_alive(5,6),0);
    EXPECT_EQ(cell.count_around_alive(11,5),2);
    EXPECT_EQ(cell.count_around_alive(11,6),3);
    EXPECT_EQ(cell.count_around_alive(11,10),3);
}