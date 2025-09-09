#include <math.h>

int main()
{
	float r = 5;
	float circumference, area, surface_area, volume;

	circumference = 2 * M_PI * r;
	area = M_PI * pow(r, 2);
	surface_area = 4 * M_PI * area;
	volume = (4 * M_PI * pow(r, 3)) / 3;
	
	return 0;
}
