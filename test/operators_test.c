#include <stdio.h>

int main()
{
	int num = 1;
	int *ptr = &num;
	num = *ptr++;
	printf("%d\n", num);
}
