#include "S_H_01.h"
#include <iostream>
#include <math.h>

int sum(int x, int y)
{
	return x+y;
}
double dev(int x, int y)
{
	
	return static_cast<double>(x)/y;
}

int mult(int x, int y)
{
	return x*y;
}
int sub(int x, int y)
{
	return x - y;
}

int deg(int x, int y)
{
	return pow (x, y);
}


void result(double res)
{
	std::cout << res;
}
