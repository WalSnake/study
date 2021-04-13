#include <iostream>
#include <cstdlib> 
using namespace std;

// Task 1 function
bool PrintArray(double arr[], int size) 
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return true;
}

// Task 2 & 3 array initialization function
bool InitArray(int* arr, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 2;
	}
	return true;
}

// Task 2 function
bool InvertArray(int arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = (arr[i] == 0) ? 1 : 0;
		cout << arr[i] << " ";
	}
	cout << endl;
	return true;
}

// Task 3 function {1 4 7 10 13 16 19 22}
bool InitArray3(int arr[], int size)
{
	int a = 1;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = a;
		cout << arr[i] << " ";
		a = a + 3;
	}
	cout << endl;
	return true;
}

int main()
{
	srand(time(0));

	// Task 1
	cout << "// Task 1 //" << endl;
	{
		const int mysize = 7;
		double myarr[] = { 8.5267, 75.4356, 0.1245, 4.7658, 2.6572, 4.2456, 68.0021 };
		if (PrintArray(myarr, mysize))
		{
			cout << "Array was successfuly printed" << endl;
		}
	}
	cout << "-----------------------------------------------------------------------" << endl;

	// Task 2
	cout << "// Task 2 //" << endl;
	{
		const int mysize = 10;
		int myarr[mysize];
		if (InitArray(myarr, mysize))
		{
			cout << "Array was successfuly initialized" << endl;
		}
		
		InvertArray(myarr, mysize);
	}
	cout << "-----------------------------------------------------------------------" << endl;

	// Task 3
	cout << "// Task 3 //" << endl;
	{
		const int mysize = 8;
		int myarr[mysize]{ 0 };
		InitArray3(myarr, mysize);
	}
	cout << "-----------------------------------------------------------------------" << endl;

	return 0;
}