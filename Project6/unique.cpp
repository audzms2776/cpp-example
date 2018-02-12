#include <iostream>
#include <memory>

using namespace std;

unique_ptr<double> f()
{
	return unique_ptr<double>{new double};
}

int main()
{
	// unique ptr
	unique_ptr<double> dp{ new double };
	*dp = 7;

	double *raw_dp = dp.get();

	cout << &dp << endl
		<< dp.get() << endl
		<< raw_dp << endl
		<< *raw_dp << endl;
		
	unique_ptr<double> dp3 = f();
	
	unique_ptr<double[]> da{new double[3]};
	
	for(unsigned i=0; i<3; ++i)
	{
		da[i] = i;
	}
}
