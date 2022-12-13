#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of JB, start from 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; <= 23; hour++)
	{
		for (minute = 0; <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0);
			_putchar('\n');
		}
	}
}
