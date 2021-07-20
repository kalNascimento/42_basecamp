#include	<unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	if(c > 0)
	{
		c = c * (c-1);
		char n = c;
		write(1, &n, 1);
	}
}

