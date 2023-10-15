module;
#include <math.h>
export module student4:f1;

namespace RBPO
{
	namespace Lab2
	{
		namespace Variant2
		{
			namespace Task4
			{
				export double f1(double x)
				{
					return (cos(x) + sin(x) + cos(3 * x) + sin(3 * x));
				}
			}
		}
	}
}