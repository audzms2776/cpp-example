//http://www.learncpp.com/cpp-tutorial/2-9-symbolic-constants-and-the-const-keyword/
#include <iostream>

using namespace  std;

int main()
{
	int x{ 4 };

	x = 5;

	cout << x << endl;

	const double gravity{ 9.8 };
	int const side_in_square{ 4 };

	cout << gravity << side_in_square << endl;

	constexpr double pi(3.4);
	cout << pi << endl;
}