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
	for(decltype(ivec.size())i = 0;i != ivec.size()/2;i++)
		cout << "i " << i <<" "<< ivec[i] + ivec[ivec.size()-i-1] << endl;
	
	return 0;
}

