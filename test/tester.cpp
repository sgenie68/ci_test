#include <stdio.h>
#include "include/library.h"
#include "include/deplib.h"

int main()
{
	printf("%d %d\n",func1(5),func2(10));
	printf("%d %d\n",depfunc1(5),depfunc2(10));
	return 0;
}

