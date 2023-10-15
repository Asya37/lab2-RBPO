module;
#include <math.h>
export module student4:f4;
import :a;
namespace RBPO
{
	namespace Lab2
	{
		namespace Variant2
		{
			namespace Task4
			{
				export double f4(double e)
				{
					double s1 = 0;
					double s2 = a(0);
					double sum = s1 + s2;
					int i = 0;
					while (fabs(s2 - s1) > e)
					{
						s1 = s2;
						s2 = a(i);
						sum += s2;
						i++;
					}
					return sum;
				}
			}
		}
	}
}