#include <math.h>
import student3;
double RBPO::Lab2::Variant2::Task3::f2(double x)
{
	return (x >= 1.1 ? 9 - x : sin(3 * x) / (pow(x, 4) + 1));
}