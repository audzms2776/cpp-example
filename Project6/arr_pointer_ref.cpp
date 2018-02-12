#include <iostream>

/**
 * \brief 
 * \param size 
 * \param arr1 
 * \param arr2 
 * \param arr3 
 */
void vector_add(unsigned size, double arr1[], double arr2[], double arr3[])
{
	for (unsigned i = 0; i < size; ++i)
		arr3[i] = arr1[i] + arr2[i];
}

int main()
{
	double w[] = { 1.0, 2.0, 3.0 };

	double x[3];

	for(auto i=0; i<3; ++i)
	{
		x[i] = w[i] * 3;
	}

	auto y = new double[10];

	vector_add(3, w, x, y);

	delete[] y;

	int i = 3;
	int *ip = &i;

	int *ip2 = new int;
	ip2 = &i;

	delete ip2;

	// 포인터 초기화
	int *ip3 = nullptr;
	int *ip4{};
}