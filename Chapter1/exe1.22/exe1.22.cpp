#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item sum;
	if(std::cin >>sum)
	{	Sales_item tmp;
		while(std::cin >> tmp)
		{
			if(tmp.same_isbn(sum))
			//if(tmp.isbn() == sum.isbn())// don't know how to write
				sum +=tmp;
			else
			{
				std::cout << sum << std::endl;
				sum = tmp;
			}
		}
	std::cout << sum << std::endl;
	}
	else
	{
		std::cerr << "No data input?" << std::endl;
		return -1;
	}
	return 0;
}

