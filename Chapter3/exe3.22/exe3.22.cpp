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
	for(auto it = str_vec.cbegin();it != str_vec.cend() && !it->empty(); ++it)
		cout << *it << endl;
	return 0;
}
