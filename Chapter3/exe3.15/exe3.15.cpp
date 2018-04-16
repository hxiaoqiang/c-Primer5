#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

using std::vector;
using std::string;

int main()
{
	string str;
	vector<string> str_vec;
	while(cin >> str)
		str_vec.push_back(str);
	decltype(str_vec.size()) i,tmp;
	tmp = str_vec.size();
	cout << "vector has " << tmp << "vectors" << endl;
	for(i = 0;i < tmp ;i++)
		cout << "vector " << i <<" " << str_vec[i] << endl; 	
	return 0;
}
