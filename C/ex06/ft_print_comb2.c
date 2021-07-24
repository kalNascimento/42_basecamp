#include	<unistd.h>

void	ft_putchar()
{
	write(1, &a, 1);
}
	
void	ft_print_comb2()
{
	int un;
	int dz;
	
	while (un <= 99)
	{
		s = f + 1;
		while (dz <= 99)
		{
			ft_putchar(un, dz);
			if (!(un ==98 && dz == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			dz++
		}
		un++
	}
}
