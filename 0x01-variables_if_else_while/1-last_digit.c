#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Return: 0
 * End of comment
 */
int main(void)
{
int n;
int dig;
srand(time(0));
n = rand() - RAND_MAX / 2;
dig = n % 10;
if (dig > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, dig);
}
else if (dig == 0)
{
printf("Last digit of %d is %d and is 0\n", n, dig);
}
else if (dig < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, dig);
}
return (0);
}
