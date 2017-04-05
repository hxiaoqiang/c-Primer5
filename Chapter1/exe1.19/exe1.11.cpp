#include <iostream>
int main()
{
	int a,b;
	int up,down;
	std::cout << "Please input 2 numbers:" << std::endl;
	std::cin >> a >> b ;
	if(a > b)
	{
		up   = a;
		down = b;
	}
	else
	{
		up   = b;
		down = a;
	}	
	std::cout << "The result is:" << std::endl;
	while(up >= down)
	{
		std::cout << down << std::endl;
		down++;
	}
	return 0;
}
