#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main()
{
	float r = 5;
	float circumference, area, surface_area, volume;

	circumference = 2 * M_PI * r;
	area = M_PI * pow(r, 2);
	surface_area = 4 * area;
	volume = (4 * M_PI * pow(r, 3)) / 3;
	
	return 0;
}
