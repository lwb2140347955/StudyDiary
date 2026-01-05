#include <iostream>
#include "greedy_algorithm.cpp"
int main() {

    FindZero(17);

    std::vector<Goods> goods_list{Goods{5, 10}, Goods{3, 15}, Goods{4, 20}, Goods{2, 25}};
    Knapsack(goods_list, 10);
   
    
    return 0;
}