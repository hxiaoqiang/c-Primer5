#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int tmp;
	vector<int> ivec;
	while(cin >> tmp)
		ivec.push_back(tmp);
	auto it_begin = ivec.begin();
	auto it_end   = ivec.end();
	int i = 0;
	cout << "you input " << it_end - it_begin << " numbers" << endl;
	while(it_begin < it_end - 1) //if odd numbers,make sure the mid not add 
	{	
		i++;
		cout << "i " << i << " " << (*it_begin) + (*(it_end-1)) << endl;
		++it_begin;
		--it_end;
	}
	getchar(); //add for Visual Studio Debug
	return 0;
}