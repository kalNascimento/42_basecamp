#include	<unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	int	un;
	int	dz;
	int	cn;

	un = '2';
	dz = '1';
	cn = '0';
	while (cn < '8')
	{
		while (dz < '9')
		{
			while (un <= '9')
			{
				write(1, &cn, 1);
				write(1, &dz, 1);
				write(1, &un, 1);
				if (cn != '7')
					write(1, ", ", 2);
				un++;
			}
			un = ++dz + 1;
		}
		dz = ++cn + 1;
		un = dz + 1;
	}
}
