#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> ivec{1,2,3,4,5,6,7,8,9,10};
	cout << "Input: " << endl;
	for (auto it = ivec.begin(); it != ivec.end(); ++it)
		cout << *it << " "; 
	cout << endl;
	cout << "Output: " << endl;
	for (auto it = ivec.begin(); it != ivec.end(); ++it)
	{
		*it = (*it) * 2;
		cout << *it << " ";
	}
	cout << endl;
	//getchar();
}
