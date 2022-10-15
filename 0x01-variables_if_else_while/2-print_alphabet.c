
#include <stdio.h>
/**u
 *main-program entry point.
 *Return:1 no error, non zero if error.
 **/
int main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (1);
}
