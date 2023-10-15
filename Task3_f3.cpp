#include <math.h>
module student3;

double RBPO::Lab2::Variant2::Task3::f3(int n)
{
	double s = 0;
	int i = 0;
	do
	{
		s += a(i);
		i++;
	} while (i <= n);
	return s;
}