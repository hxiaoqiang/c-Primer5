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
	if(str1 != str2)
	{
		if(str1 > str2)
			cout << str1 << endl;
		else	
			cout << str2 << endl;
	}
	else
		return 1;
	return 0;
}

