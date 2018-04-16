#include <iostream>
#include <stdio.h>
int main()
{
	int *p1,*p2;
	int data1 = 3;
	int data2 = 4;
	p1 = &data1;
	p2 = &data2;
	std::cout <<"*p1:" << *p1 << " *p2:" << *p2<<std::endl;
	printf("p1 addr:%p,p2 addr:%p\n",p1,p2);
	*p1 = 5;
	p2  = p1;
	std::cout <<"*p1:" << *p1 << " *p2:" << *p2<<std::endl;
	printf("p1 addr:%p,p2 addr:%p\n",p1,p2);
	return 0;
	
}
