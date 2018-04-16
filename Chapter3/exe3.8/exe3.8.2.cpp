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
	string::size_type  i;
	for(i = 0;i < str.size()-1;i++)
	{
		if(isalpha(str[i]))
			str[i] = 'X';
	}
	cout << "Output string: " << str << endl;
	return 0;
}
