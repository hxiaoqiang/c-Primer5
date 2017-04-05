#include <iostream>
int main()
{
	int sum = 0;
	int i;
/*
	int i = 50;
	while(i <100)
	{
		sum +=i;
		i++;
	}
*/
	for(i = 50;i < 100;i++)
		sum +=i;
	std::cout << "sum is  " << sum << std::endl;
	return 0;
}
