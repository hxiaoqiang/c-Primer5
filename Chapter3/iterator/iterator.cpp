#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string str("some string");
	cout << str << endl;
	if(str.begin() != str.end())
	{
		auto it = str.begin();
		*it = toupper(*it);
	}
	cout << str << endl;
	return 0;
}
