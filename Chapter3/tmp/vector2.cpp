#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> ievc(10);
	for(decltype(ievc.size()) i = 0;i != 10;i++)
		ievc[i] = i;
	
	for(decltype(ievc.size()) i = 0;i != 10;i++)
		cout << ievc[i] << endl;
	return 0;
}

