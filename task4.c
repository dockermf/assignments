#include <math.h>

int main()
{
	char hour, minute;
	float degree;

	hour = 23 % 12;
	minute = 28;
	degree = fabs(30 * hour - 5.5 * minute);
	degree = degree > 180 ? 360 - degree : degree;

	return 0;
}
