#include <iostream>
#include <random>
#include <stdlib.h>
#include <chrono>
#include "Header.h"
using namespace std;

// functions

int32_t getRandomNum(int32_t min, int32_t max)
{
	const static auto seed = chrono::system_clock::now().time_since_epoch().count();
	static mt19937_64 generator(seed);
	uniform_int_distribution<int32_t>dis(min, max);
	return dis(generator);
};