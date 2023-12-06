#include <stdio.h>
/**
 * main - main block
 */
void main(void)
{
	for (char first1 = 48; first1 <= 57; first1++)
	{
		for (char first2 = 48; first2 <= 57; first2++)
		{
			for (char sec1 = 48; sec1 <= 57; sec1++)
			{
				for (char sec2 = 48; sec2 <= 57; sec2++)
				{
					putchar(first1);
					putchar(first2);
					putchar(' ');
					putchar(sec1);
					putchar(sec2);
					if (first1 + first2 + sec1 + sec2 != 228)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
}
