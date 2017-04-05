#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item currBook, valBook;
	if(std::cin >> currBook)
	{
		int cnt = 1;
		while(std::cin >> valBook)
		{
			if(valBook.same_isbn(currBook))
				++cnt;
			else
			{
				std::cout << currBook << " occurs "
					<< cnt << "times" << std::endl;
				currBook = valBook;
				cnt = 1;
			}
		}
		std::cout << currBook << " occurs "
				<< cnt << "times" << std::endl;
	}
	else
	{
		std::cerr << "Any input?" << std::endl;
		return -1;
	}
	return 0;
}
