#include "HighAccuracyAlgorithm2.h"
#include <algorithm>

std::vector<int> mul(const std::vector<int>& a,const std::vector<int>& b)
{
	
	std::vector<int> c(a.size() + b.size(),0);
	
	for(int i = 0;i<a.size();i++)
	{
		for(int j = 0;j<b.size();j++)
		{
			c[i+j] += a[i] * b[j];//key
		}
	}
	
	int carry = 0;
	for(int i = 0;i < c.size() ;i++)
	{
		int temp = c[i] + carry;
		c[i] = temp%10;
		carry = temp/10;
	}
	
	while(c.size() > 1 && c.back() == 0 )	c.pop_back();
	
	return c;
	  
}