#include <vector>
#include <iostream>
using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> V1{42,42,42,42,42,42,42,42,42,42};
	vector<int> V2(10,42);
	vector<int> V3;
	int tmp = 42;
	for(decltype(V3.size())i = 0; i != 10;i++)
		V3.push_back(tmp);
	
	for(decltype(V1.size())i = 0; i != 10;i++)
		cout << V1[i] << " ";
	cout << endl;
	
	for(decltype(V2.size())i = 0; i != 10;i++)
		cout << V2[i] << " ";
	cout << endl;
	
	for(decltype(V3.size())i = 0; i != 10;i++)
		cout << V3[i] << " ";
	cout << endl;
	return 0;	
}
