module;
#include <math.h>
export module student5;
namespace RBPO
{
	namespace Lab2
	{
		namespace Variant2
		{
			namespace Task5
			{
				export double f1(double x);
				export double f2(double x);
				export double a(int i);
				export double f3(int n);
				export double f4(double e);
			}
		}
	}
}
module :private;
double RBPO::Lab2::Variant2::Task5::f1(double x)
{
	return (cos(x) + sin(x) + cos(3 * x) + sin(3 * x));
}
double RBPO::Lab2::Variant2::Task5::f2(double x)
{
	return (x >= 1.1 ? 9 - x : sin(3 * x) / (pow(x, 4) + 1));
}
double RBPO::Lab2::Variant2::Task5::a(int i)
{
	return (pow(-1, i) * (i + 1) / (pow(i, 3) + 2));
}
double RBPO::Lab2::Variant2::Task5::f3(int n)
{
	double sum = 0;
	for (int i = 0; i <= n; i++)
	{
		sum += a(i);
	}
	return sum;
}
double RBPO::Lab2::Variant2::Task5::f4(double e)
{
	double s1 = 0;
	double s2 = a(0);
	double sum = s1 + s2;
	for (int i = 1; ; i++)
	{
		if (fabs(s2 - s1) <= e)
		{
			return sum;
		}
		s2 = a(i);
		sum += s2;

		s1 = s2;
	}
}