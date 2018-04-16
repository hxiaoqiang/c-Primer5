#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string str,strtmp;
	decltype(strtmp.size()) i;
	cin >> strtmp;
	cout << "Input string: " << strtmp << endl;	
	for(i = 0; i < strtmp.size(); i++)	
		if(!ispunct(strtmp[i]))
			str += strtmp[i]; 
	if(str.size() > 0)
		cout << "Output string: " << str << endl;
}
