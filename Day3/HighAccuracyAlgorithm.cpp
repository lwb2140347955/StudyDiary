#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

//两个倒序排列的数组相加
std::vector<int> add(std::vector<int>& a,std::vector<int>& b)
{
	std::vector<int> c;
	int carry = 0;
	for(int i = 0;i < a.size() || i < b.size() || carry;i++ )
	{
		if(i < a.size()) carry += a[i];
		if(i < b.size()) carry += b[i];
		c.push_back(carry%10); 
		carry /= 10;
	}
	return c;
 } 

//两个倒序排列的数组相减（大减小）
std::vector<int> sub(std::vector<int>& a,std::vector<int>& b)
{
	if(a.size() < b.size() ||(a.size() == b.size() && a<b))
		{
			std::cout << '-';
			std::swap(a,b);
		}
	
	std::vector<int> c;
	int borrow = 0;
	for(int i = 0;i < a.size() ;i++ )
	{
		int temp = a[i] - borrow;
		if(i < b.size()) temp -= b[i];
		if(temp > 0)
		{
			c.push_back(temp);
			borrow = 0; 
		} 
		else if(temp < 0)
		{
			c.push_back(temp+10);
			borrow = 1;  	
		}
	}
	while(c.size() > 1 && c.back() == 0) c.pop_back();
	return c;
}
