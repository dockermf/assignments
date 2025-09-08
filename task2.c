#include <stdio.h>
#include <math.h>

int my_floor(float inp)
{
	int integer = 0;

	while (inp - integer > 1)
		integer++;

	return integer;
}

int main()
{
	int K = 48109;
	int h = floor(K / 3600);
	int m = floor((K / 60) % 60); /* modulo of total minutes */
	int s = K % 60;

	printf("%d sec -> %d hours, %d min, %d sec\n", K, h, m, s);

	return 0;
}
