#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

using std::vector;

int main()
{
	int tmp;
	vector<int> ivec;
	while(cin >> tmp)
		ivec.push_back(tmp);
	//print those vector
	decltype(ivec.size()) i;
	for(i = 0;i < ivec.size();i++)
		cout << ivec[i] << endl;
	return 0;
}
