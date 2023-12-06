#include "main.h"
/**
 * jack_bauer - prints every minute starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
	for (int hour1 = 0; hour1 <= 2; hour1++)
	{
		for (int hour2 = 0; hour2 <= 9; hour2++)
		{
			for (int min1 = 0; min1 <= 5; min1++)
			{
				for (int min2 = 0; min2 <= 9; min2++)
				{
					if (!((hour1 == 2) && (hour2 > 3)))
					{
						_putchar('0' + hour1);
						_putchar('0' + hour2);
						_putchar(':');
						_putchar('0' + min1);
						_putchar('0' + min2);
						_putchar('\n');
					}
				}
			}
		}
	}
}
