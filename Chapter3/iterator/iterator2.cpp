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
	for(auto it = str.begin();it != str.end() && !isspace(*it);++it )
	{
		*it = toupper(*it);
	}
	cout << str << endl;
	return 0;
}
