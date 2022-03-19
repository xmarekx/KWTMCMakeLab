
#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
#endif

int main()
{
	double result;
	#ifdef USE_TRIGONOMETRY_DEGREE
		result = cos(45.0);
	#else
		result = cos(M_PI / 4.0);
	#endif

	std::cout << result << std::endl;
	return 0;
}