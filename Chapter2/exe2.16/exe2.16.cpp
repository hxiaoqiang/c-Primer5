#include <iostream>
#define b
int main()
{
	int i = 0, &r1 = i;
	double d = 0,&r2 = d;
#ifdef a
	r2 = 3.14159;
#endif
	
#ifdef b
	r2 = r1;
#endif
	i = r2;
	r1 = d;
	std::cout << "i =  " << i <<" r1 =" << r1 << " r2 = " << r2 << std::endl; 
	return 0;
}

