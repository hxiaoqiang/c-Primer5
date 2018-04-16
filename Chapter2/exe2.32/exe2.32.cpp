#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int null = 0;
	int *p = nullptr;
	p = &null;
	cout << "null " << null << " *p " << *p << endl;
	printf("[%s][%d]*p's address %p\n",__func__,__LINE__,p);
	return 0;
}
