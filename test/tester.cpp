#include <stdio.h>
#include "library.h"
//#include "include/deplib.h"

int depfunc1(int a)
{
	return a+a;
}

int depfunc2(int a)
{
	return 3*a;
}



int main()
{
	printf("%d %d\n",func1(5),func2(10));
	printf("%d %d\n",depfunc1(5),depfunc2(10));
	return 0;
}

