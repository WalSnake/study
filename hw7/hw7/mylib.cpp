#include <iostream>

namespace MyLib
{
	// Task 1 functions 

	void InitArray(float arr[], size_t size)
	{
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = (rand() % 100) - 50;
		}
	}
	void PrintArray(float arr[], size_t size)
	{
		for (size_t i = 0; i < size; i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
	}
	void Counter(float arr[], size_t size)
	{
		int pos = 0;
		int neg = 0;
		for (size_t i = 0; i < size; i++)
		{
			if (arr[i] > 0)
				pos++;
			else
				if (arr[i] != 0)
					neg++;
		}
		std::cout << "positive numbers: " << pos << std::endl;
		std::cout << "negative numbers: " << neg << std::endl;
	}
}