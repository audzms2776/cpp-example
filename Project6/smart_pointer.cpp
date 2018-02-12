#include <iostream>
#include <memory>

using namespace std;

unique_ptr<double> f()
{
	return unique_ptr<double>{new double};
}

int main()
{
	unique_ptr<double> dp{ new double };
	*dp = 7;

	double *raw_dp = dp.get();

	cout << &dp << endl
		<< dp.get() << endl
		<< raw_dp << endl
		<< *raw_dp << endl;
}
