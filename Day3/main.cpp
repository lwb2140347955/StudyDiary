#include <iostream>
#include <string>
#include "HighAccuracyAlgorithm.h"

void test_add()
{
    std::string str1,str2;
    std::vector<int> a,b,c;

    std::cout<<"input fist number to add: "<<std::endl;
    std::getline(std::cin, str1);
    std::cout<<"input second number to add: "<<std::endl;
    std::getline(std::cin, str2);

    //字符串倒序存入数组好做计算
    for(int i = str1.size()-1; i >= 0; i--) a.push_back(str1[i]-'0');
    for(int i = str2.size()-1; i >= 0; i--) b.push_back(str2[i]-'0');

    c = add(a,b);
    
    std::cout<<"add result: "<<std::endl;
    for(int i = c.size()-1; i >= 0; i--) std::cout << c[i];
    std::cout<<std::endl; 
}

void test_sub()
{
    std::string str1,str2;
    std::vector<int> a,b,c;
    std::cout<<"input fist bigger number to sub: "<<std::endl;
    std::getline(std::cin, str1);
    std::cout<<"input second smaller number to sub: "<<std::endl;
    std::getline(std::cin, str2);

    //字符串倒序存入数组好做计算
    for(int i = str1.size()-1; i >= 0; i--) a.push_back(str1[i]-'0');
    for(int i = str2.size()-1; i >= 0; i--) b.push_back(str2[i]-'0');
    
    c = sub(a,b);

  
    for(int i = c.size()-1; i >= 0; i--) std::cout << c[i];
    std::cout<<std::endl;
}

int main()
{
    test_add();
    test_sub();

    return 0;
}