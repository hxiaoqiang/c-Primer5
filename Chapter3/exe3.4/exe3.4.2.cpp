#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

using std::string;

int main()
{
	string str1,str2;
	cin >> str1;
	cin >> str2;
	if(str1.size() == str2.size())
	{
		return 1;
	}
	else
	{
		if(str1.size() > str2.size())
			cout << str1 << endl;
		else
			cout << str2 << endl;
	}
	return 0;
}

