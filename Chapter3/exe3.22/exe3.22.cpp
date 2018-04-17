#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	string str;
	vector<string> str_vec;
	while(getline(cin,str))
		str_vec.push_back(str);
	cout << "input: " << endl;
	for(decltype(str_vec.size()) i = 0; i!= str_vec.size();i++)
		cout << str_vec[i];
	cout << endl;
	cout << "output: "<< endl; 
	for (auto it = str_vec.begin(); it != str_vec.end() && !it->empty(); ++it)
	{
		for (auto s_it = (*it).begin(); s_it != (*it).end(); ++s_it)
			*s_it = toupper(*s_it);	
		cout << *it << endl;
	}
	getchar();
	return 0;
}
