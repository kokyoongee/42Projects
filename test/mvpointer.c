#include <stdio.h>

void movepointer(char **str)
{
	(*str)++;
	(*str)++;
}

int main()
{
	char *str = "hello";
	//char **ptr = &str;
	movepointer(&str);
	printf("%s\n", str);

}
