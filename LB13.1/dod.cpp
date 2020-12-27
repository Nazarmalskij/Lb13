#include "dod.h"
#include "var.h"
#include <math.h>

using namespace nsVar;

void nsDod::dod()
{
	int R = 0;
	n++;
	R = ((x * 1.0 - 1) * n * 1.0 * pow(x * 1.0, -1)) / (n * 1.0 + 1);
	a *= R;

}
