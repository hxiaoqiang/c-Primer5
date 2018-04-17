#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10,42);
	vector<int> v4{10};
	vector<int> v5{10,42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};

	cout << "v1 " << v1.size() <<endl;
	cout << "v2 " << v2.size() <<endl;
	cout << "v3 " << v3.size() <<endl;
	cout << "v4 " << v4.size() <<endl;
	cout << "v5 " << v5.size() <<endl;
	cout << "v6 " << v6.size() <<endl;
	cout << "v7 " << v7.size() <<endl;
	
	cout << endl;
	
#ifdef 	NO_ITERATOR
	cout << "v2 ";	
	for(decltype(v1.size()) i=0;i != v2.size();i++)
		cout << v2[i] <<" ";
	cout << endl;	
	
	cout << "v3 ";	
	for(decltype(v2.size()) i=0;i != v3.size();i++)
		cout << v3[i]<<" ";
	cout << endl;	
	
	cout << "v4 ";	
	for(decltype(v4.size()) i=0;i != v4.size();i++)
		cout  << v4[i] <<" ";
	cout << endl;	

	cout << "v5 ";	
	for(decltype(v5.size()) i=0;i != v5.size();i++)
		cout  << v5[i]<<" ";
	cout << endl;	

	cout << "v6 ";	
	for(decltype(v6.size()) i=0;i != v6.size();i++)
		cout  << v6[i]<<" ";
	cout << endl;	

	cout << "v7 ";	
	for(decltype(v7.size()) i=0;i != v7.size();i++)
		cout << v7[i]<<" ";
	cout << endl;	
#else
	cout << "v2 ";	
	for(auto it = v2.begin(); it != v2.end();++it)
		cout << *it << " ";	
	cout << endl;	

	cout << "v3 ";	
	for(auto it = v3.begin(); it != v3.end();++it)
		cout << *it << " ";	
	cout << endl;	

	cout << "v4 ";
	for(auto it = v4.begin(); it != v4.end();++it)
		cout << *it << " ";	
	cout << endl;	

	cout << "v5 ";	
	for(auto it = v5.begin(); it != v5.end();++it)
		cout << *it << " ";	
	cout << endl;	

	cout << "v6 ";	
	for(auto it = v6.begin(); it != v6.end();++it)
		cout << *it << " ";	
	cout << endl;	

	cout << "v7 ";	
	for(auto it = v7.begin(); it != v7.end();++it)
		cout << *it << " ";	
	cout << endl;	

#endif
}

