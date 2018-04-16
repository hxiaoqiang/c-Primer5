#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string str,strtmp;
	while(cin >> strtmp)
		str += strtmp;
	cout << str <<endl;
	return 0;	
}

