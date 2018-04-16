#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string str;
	cin >> str;
	cout << "Input string: " << str << endl;	
	for(auto &c : str)
		if(isalpha(c))
			c = 'X';
	cout << "Output string: " << str << endl;
}
