#include <stdio.h>

_putchar(void)
{

	 putchar('H');
        for (c = 'a'; c <= 'z'; c++)
        {
                if (c == 'o' || c == 'l' || c == 'b' || c == 'e' || c == 'r' || c == 't')
                {
                        putchar(c);
                }
        }
        for ( c = 'o'; c >= 'n'; c++)
        {
                if (c == 'o' || c == 'n')
                        putchar(c);
        }



	putchar(c);
	putchar('\n');

	return 0;
}
