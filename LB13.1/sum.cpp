#include <cmath>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace nsDod;
using namespace nsVar;

void nsSum::sum()
{
	n = 0;
	a = (((x * 1.0 - 1) / (x * 1.0)));
	s = a;
	do
	{
		n++;
		dod();
		s += a;
	} while (abs(a) >= eps);

}
