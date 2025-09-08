#include <stdio.h>

#define PI 3.14159265358979323846

int main()
{
	float r = 5;
	float circumference, area, surface_area, volume;

	circumference = 2 * PI * r;
	area = PI * (r * r);
	surface_area = 4 * PI * (r * r);
	volume = (4 * PI * (r * r * r)) / 3;

	printf("Длина: %.2f\n", circumference);
	printf("Площадь: %.2f\n", area);
	printf("Площадь поверхности сферы: %.2f\n", surface_area);
	printf("Объем шара: %.2f\n", volume);

	return 0;
}
