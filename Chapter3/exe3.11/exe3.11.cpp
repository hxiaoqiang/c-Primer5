#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

using std::string;

int main()
{
	//string s = "Keep out!";
	const string s = "Keep out!";
	for(auto &c : s)
	{
		c = toupper(c);
	}
	cout << s << endl;
	return 0;
}
