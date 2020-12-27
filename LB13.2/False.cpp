#include <stdio.h>
#include "False.h"
#include "var.h"

#define RESULT_SECOND(x, y, z) (MIN(x * y, y * z) + MIN(z * x, y * z))
#define PRINTR(w) puts ("Result :"); \
		printf (#w"=%f\n",(float)w)
#define MIN(x, y) (((x) > (y)) ? (x) : (y))

using namespace nsVar;

void nsFalse::False()
{
	w = RESULT_SECOND(x, y, z);
	PRINTR(w);
}