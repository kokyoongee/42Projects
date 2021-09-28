#include <stdio.h>

int add_one(int n)
{
	n = n + 1;
}

int *create(int size)
{
	int arr[size];
	return &arr;
}

int main()
{
	int nbr = 1;
	nbr = add_one(nbr);
	printf("%d\n", nbr);
}
