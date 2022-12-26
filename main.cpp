#include <iostream>
#include "sqr.hpp"

// вывод вектора на консоль
template <typename T>
void printVector(const std::vector<T>& vec)
{
	auto first = true;
	for (const T& v : vec)
	{
		if (!first)
		{
			std::cout << ", ";
		}
		else
		{
			first = false;
		}

		std::cout << v;
	}

	std::cout << std::endl;
}


int main()
{
	int vi = 4;
	std::cout << "[IN]: " << vi << std::endl;
	std::cout << "[OUT]: " << sqr(vi) << std::endl;

	double vd = 5.3;
	std::cout << "[IN]: " << vd << std::endl;
	std::cout << "[OUT]: " << sqr(vd) << std::endl;

	std::vector vvi{ -1, 4, 8 };
	std::cout << "[IN]: ";
	printVector(vvi);
	std::cout << "[OUT]: ";
	printVector(sqr(vvi));
}