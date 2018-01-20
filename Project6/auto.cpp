#include <iostream>

using namespace std;

auto add(const int x, const int y) -> int;

int main()
{
	const auto d = 50.3;

	cout << d << endl;
	cout << add(10, 20) << endl;
}

auto add(const int x, const int y) -> int
{
	return x + y;
}