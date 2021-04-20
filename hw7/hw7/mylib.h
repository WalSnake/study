#pragma once
namespace MyLib
{
	void InitArray(float arr[], size_t size);
	void PrintArray(float arr[], size_t size);
	void Counter(float arr[], size_t size);
}

#pragma pack (push,1)
struct Employee
{
	long id;
	unsigned short age;
	double salary;
};
#pragma pack (pop)