#include <iostream>
#include <vector>
#include <cctype>

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
	for(decltype(str_vec.size()) i = 0;i < str_vec.size();i++)
	{
		for(auto &c : str_vec[i])
			c = toupper(c);
		cout << str_vec[i] << endl;
	}
		
	return 0;
}

