#include	<unistd.h>

void	ft_print_number(void);

void	ft_print_number(void)
{
	int	n;

	n = '1';
	while (n <= '9')
	{
		write(1, &n, 1);
		n++;
	}
}
