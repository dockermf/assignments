#include <stdio.h>
#include <math.h>

int main()
{
	int K = 48109;
	int h = floor(K / 3600);
	int m = floor((K / 60) % 60); /* modulo of total minutes */
	int s = K % 60;

	return 0;
}
