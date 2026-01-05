//贪心算法：每一步都采取当前状态下最优选择且希望这样的局部最优能导致全局最优
#include <iostream>
#include <vector>
#include <algorithm>
//例1：找零问题
//有若干张1元、2元、5元的纸币，用数量最少的纸币找零n元
void FindZero(int n)
{
    int Num1=0, Num2=0, Num5=0;
    Num5=n/5;
    Num2=n%5/2;
    Num1=n%5%2;
    std::cout<<Num5<<"张5元、"<<Num2<<"张2元、"<<Num1<<"张1元"<<std::endl;
}

//例2：背包问题
//有n件物品和一个容量为c的背包，每件物品的体积和价值已知，求最多能装入背包物品的体积和价值
struct Goods
{
    int volume;
    int value;
    
    Goods(int v, int w):volume(v), value(w){}
    
    //根据性价比降序排列
    bool operator<(const Goods& other) const 
    {
        return (double)value/volume > (double)other.value/other.volume;
    }
};
void Knapsack(std::vector<Goods>& goods, int capacity)
{
    std::sort(goods.begin(), goods.end());
    int Kvolume=0, Kvalue=0;

    for(auto& good:goods)
    {
        if(good.volume <= 0) continue;
        if(Kvolume+good.volume<=capacity)
        {
            Kvolume+=good.volume;
            Kvalue+=good.value;
        }
        else
        {
            Kvalue+=(capacity-Kvolume)*good.value/good.volume;
            break;
        }
    }   

    std::cout<<"最多能装入背包物品的价值为："<<Kvalue<<std::endl;
}