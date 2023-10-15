module;
#include <math.h>
export module student4:f2;

namespace RBPO
{
	namespace Lab2
	{
		namespace Variant2
		{
			namespace Task4
			{
				export double f2(double x)
				{
					return (x >= 1.1 ? 9 - x : sin(3 * x) / (pow(x, 4) + 1));
				}
			}
		}
	}
}