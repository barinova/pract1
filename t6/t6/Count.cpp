#include "Count.h"


static int count = 0;
Count::Count(void)
{
	count++;
	printf("%d\n", count);
}


Count::~Count(void)
{
	count--;
	printf("%d\n", count);
}
