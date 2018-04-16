#include <iostream>
int main()
{
	int i = 0;
//	double * dp = &i;
	double *dp;
	dp = (double *)&i;
	//int *ip = i;
	int *ip = (int *)i;
	//int *ip = nullptr;
	//int *ip = 0;
	
	int *p = &i;
	std::cout << *dp << *ip <<*p << std::endl;
	return 0;
}
