#include <iostream>
#include <string>
using  std::cin;
using  std::cout;
using  std::string;

int main()
{
	string s;
	while(getline(cin,s))
		cout << s << std::endl;
	return 0; 
}

