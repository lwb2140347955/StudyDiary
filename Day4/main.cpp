#include <iostream>
#include <vector>
#include <string>
#include "HighAccuracyAlgorithm2.h"

	
	
void test_mul()
{
	std::string str1,str2;
	std::vector<int> a,b,c;	
	std::getline(std::cin,str1);
	std::getline(std::cin,str2);
	
	for(int i = str1.size()-1;i>=0;i--) a.push_back(str1[i] - '0');
	for(int i = str2.size()-1;i>=0;i--) b.push_back(str2[i] - '0');
	
	c = mul(a,b);
	
	for(int i = c.size()-1;i>=0;i--) std::cout<<c[i];
	std::cout<<std::endl;
}



int main ()
{
	test_mul();
	
	
	
	return 0;
 } 
