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

// Task 2 & 4 & 5 array initialization function
bool InitArray(int* arr, int size, int a)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % a;
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

// Task 3 function
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

// Task 4 function
/*
bool ShiftArray(int arr[], int tarr[], int size, int n)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for (size_t i = 0; i < size; i++)
	{
		if (n >= 0 && (i+n) < size)
		{
			tarr[(i + n)] = arr[i];
		}
		if (n > 0 && (i + n) >= size)
		{
			tarr[(0 + n)] = arr[i];
		}
		if (n < 0 && i+n >=0)
		{

		}
		if (n < 0 && i + n < 0)
		{

		}
	}
	*arr = *tarr;
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return true;
}
*/

// Task 5*
bool CheckBalance(int arr[], int size)
{
	int a = 0;
	int b = 0;
	bool balance = false;
	bool balancetmp = false;
	for (size_t i = 0; i < size; i++)
	{
		b = b + arr[i];
		//cout << arr[i] << " ";
	}
	for (size_t i = 0; i < size; i++)
	{
		if (balancetmp == false)
		{
			cout << arr[i] << " ";
			a = a + arr[i];
			b = b - arr[i];
			balancetmp = (a == b) ? true : false;
		}
		else
		{
			cout << "| " << arr[i] << " ";
			//cout << "TRUE" << endl;
			balance = true;
			balancetmp = false;
		}
	}
	cout << endl;
	if (balance == true)
	{
		cout << "TRUE";
	}
	else
	{
		cout << "FALSE";
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
		PrintArray(myarr, mysize);
	}
	cout << "-----------------------------------------------------------------------" << endl;

	// Task 2
	cout << "// Task 2 //" << endl;
	{
		const int mysize = 10;
		int myarr[mysize];
		InitArray(myarr, mysize, 2);		
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

	// Task 4*
	/*cout << "// Task 4* //" << endl;
	{
		int a;
		cin >> a;
		const int mysize = 10;
		int myarr[mysize];
		InitArray(myarr, mysize, 100);
		ShiftArray(myarr, myarr, mysize, a);
	}
	cout << "-----------------------------------------------------------------------" << endl;*/
	
	// Task 5*
	cout << "// Task 5* //" << endl;
	{
		const int mysize = 8;
		int myarr[mysize];
		InitArray(myarr, mysize, 3);
		CheckBalance(myarr, mysize);
	}
	return 0;
}