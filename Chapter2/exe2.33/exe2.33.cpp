#include <iostream>
using namespace std;
int main()
{
	int i = 0, &r = i;
	auto a = r;
	const int ci =i,&cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	const auto f = ci;
	auto &g = ci;
	//auto &h = 42;
	const auto &j = 42;
	cout << "Before assignment" << endl;
	cout <<"a "<< a <<" b " << b << " c "<< c << " d " << d;
	cout <<" e " << e << " f " << f << " g " << g << " h " << j <<endl;
	
 	a = 42;
	b = 42;
	c = 42;
	*d = 42;
	//*e = 42;
	//g = 42;

	cout << "After assignment" << endl;
	cout <<"a "<< a <<" b " << b << " c "<< c << " d " << d;
	cout <<" e " << e << " f " << f << " g " << g << " h " <<j <<endl;
	return 0;
}

