#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - Entry point
*
*Return: 0 Always (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 10 == 0)
{
printf("Last digit of %e is %e and is 0\n", n, n % 10);
}
else if (n % 10 > 5)
{
printf("Last digit of %e is %e and is greater than 5\n", n, n % 10);
}
else if ((n % 10 < 6) && (n 10 != 0))
{
printf("Last digit of %e is %e and is less than 6 and not 0\n", n, n % 10);
}
putchar('\n');
return (0);
}
