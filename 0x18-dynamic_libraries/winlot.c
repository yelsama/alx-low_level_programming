#include <unistd.h>
#include <string.h>

//9 8 10 24 75 9
int rand()
{
	static int n = -1;

	n++;
	if (n == 0)
		return 9;
	if (n == 1)
		return 8;
	if (n == 2)
		return 10;
	if (n == 3)
		return 24;
	if (n == 4)
		return 75;
	if (n == 5)
		return 9;
	return n * n % 30000;
}
