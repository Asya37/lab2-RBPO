module;
#include <cmath>
export module student1;

namespace RBPO
{
	namespace Lab2
	{
		namespace Variant2
		{
			namespace Task1
			{
				export double f1(double x)
				{
					return (cos(x) + sin(x) + cos(3 * x) + sin(3 * x));
				}
				export double f2(double x)
				{
					return (x >= 1.1 ? 9 - x : sin(3 * x) / (pow(x, 4) + 1));
				}
				export double a(int i)
				{
					return (pow(-1, i) * (i + 1) / (pow(i, 3) + 2));
				}
				export double f3(int n)
				{
					double f3 = 0;
					for (int i = 0; i <= n; i++)
					{
						f3 += a(i);
					}
					return f3;
				}
				export double f4(double e)
				{
					double s1 = a(0);
					double s2 = 0;
					double S = s1+s2;
					for (int i = 0; abs(s1 - s2) > e; i++)
					{
						s1 = a(i);
						s2 = a(i + 1);
						S += a(i);
					}
					return S;
				}
			}
		}
	}
}