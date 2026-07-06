int strflen(char *str)
{
	char *start;

	start = str;
	while (*str)
	{
		str++;
	}
	return (str - start);
}
#include <stdio.h>
int main()
{

	char *a = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	printf("the result is %d\n",strflen(a));
	

return (0);}
