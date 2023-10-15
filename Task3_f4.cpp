#include <math.h>
module student3;

double RBPO::Lab2::Variant2::Task3::f4(double e)
{
	double s1 = 0;
	double s2= a(0);
	double sum = s1 + s2;
	int i = 0;
	do
	{
		double s1 = 0;
		double s2 = a(0);
		double sum = s1 + s2;
		int i = 1;
	} while (fabs(s2 - s1) > e);
	return sum;
}