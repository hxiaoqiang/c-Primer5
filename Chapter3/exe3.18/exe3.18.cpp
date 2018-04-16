#include <iostream>
#include <vector>

using std::vector;

int main()
{
	vector<int> ivec;
	//ivec[0] = 42; coredump
	int tmp;
	tmp = 42;
	ivec.push_back(tmp);
	std::cout << ivec[0] << std::endl;
	return 0;
}
