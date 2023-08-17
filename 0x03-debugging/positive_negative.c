#include <stdio.h>
#include "main.h"

void positive_or_negative(int r)
{
	if (r > 0)
		printf9("%d is positive\n", r);
	else if (r == 0)
		printf("%d is zero\n", r);
	else
		printf("%d is negative\n", r);
}
