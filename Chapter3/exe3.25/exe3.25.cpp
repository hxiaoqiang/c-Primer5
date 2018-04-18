#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<unsigned> ivec_result(11,0);
	vector<unsigned> ivec_input;
	unsigned tmp;

	while (cin >> tmp && tmp <=100)	
			ivec_input.push_back(tmp);
	cout << "Input score: " << endl;
	for (auto it = ivec_input.begin(); it != ivec_input.end(); ++it)
		cout << *it << " ";
	cout << endl;
	auto it_input = ivec_input.begin();	
	auto it_result = ivec_result.begin();
	//unsigned tmp;
	while (it_input != ivec_input.end()&&( tmp = (*it_input) / 10 ) <= 10)
	{
		++it_input;
		++(*(it_result + tmp));//输入成绩/10 取整 作为it_result迭代器的索引
	}
	cout << "Result: " << endl;	
	for (int i = 0; i <= 10; i++)
	{
		if (i != 10)
			cout << i * 10 << "~" << i * 10 + 10 << " ";
		else
			cout << "100   ";
		cout << ivec_result[i] << endl;
	}
	getchar();
	return 0;
}