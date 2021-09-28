#include <stdio.h>
#include <string.h>

void myFunc(char **myStr)
{
	//myStr[4] = 'y';
	*myStr = *myStr + 1;
}

int main(int argc, char *argv[])
{
	char *str = "apple";
	//strcpy(str, "apple");s
	myFunc(&str);
	printf("%s", str);
}
