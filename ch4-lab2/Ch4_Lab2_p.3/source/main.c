#include <stdio.h>
#include <stdlib.h>

int abbyone(int*);

int main(void)
{
	int x = 100;
	int y = abbyone(&x);
	printf("x=%d\n", x);
	system("pause");
	return 0;
}

int abbyone(int* xptr) {
	(*xptr)++;
	printf("*xptr=%d\n", *xptr);
	return *xptr;
}