#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string str;
	cin >> str;
	cout << "Input string: " << str << endl;
	decltype (str.size()) i = 0;
	while(i < str.size()-1)
	{
		if(isalpha(str[i]))
			str[i] = 'X';
		i++;
	}
	cout << "Output string: " << str << endl;
	return 0;
}
