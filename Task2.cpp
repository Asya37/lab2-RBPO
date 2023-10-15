#include <math.h>

import student2;
double RBPO::Lab2::Variant2::Task2::f1(double x)
{
	return (cos(x) + sin(x) + cos(3 * x) + sin(3 * x));
}
double RBPO::Lab2::Variant2::Task2::f2(double x)
{
	double f;
	if (x >= 1.1) {f = 9 - x;}
	else{f = sin(3 * x) / (pow(x, 4) + 1);}
	return f;
}
double a(int i)
{
	return (pow(-1, i) * (i + 1) / (pow(i, 3) + 2));
}
double RBPO::Lab2::Variant2::Task2::f3(int n)
{

	double s = 0;
	int i = 0;
	while (i <= n) {
		s += a(i);
		i++;
	}
	return s;
}
double RBPO::Lab2::Variant2::Task2::f4(double epsilon)
{
	double s1 = 0,s2 = a(0),s = s1 + s2;
	int i = 0;
	while (fabs(s2 - s1) > epsilon)
	{
		s1 = s2;
		s2 = a(i);
		s += s2;
		i++;
	}
	return s;
}