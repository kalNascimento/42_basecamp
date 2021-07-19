#include <unistd.h>

void ft_putchar(int x, int y);

int	main()
{
	ft_putchar(5,5);
}

void ft_putchar(int x, int y)
{
	int coluna = 1;
	int linha = 1;
	char b1 = '/';
	char b2 = '\\';
	char k = '*';
	char n = '\n';
	char s = ' ';

	while(coluna <= x && linha == 1)
	{	
		
		if(coluna == 1)
		{
			write(1,&b1,1);
			coluna=1;
		}
		if(linha <= y && x == 1)
		{	
			write(1,&n,1);
			coluna=0;
			linha++;
		}

		coluna++;
		if(coluna > 0 && coluna < x)
		{
			write(1,&k,1);
			
		}
		if(coluna == x && x != 1)
		{
			write(1,&b2,1);
			write(1,&n,1);
			linha++;
			coluna = 1;
		}
		
	}
	while(coluna <= x && linha < y)
	{	
		if(coluna == 1)
		{
			write(1,&k,1);
			if(x == 1){
				coluna = 0;
			}
		}
		
		coluna++;
		if(coluna > 0 && coluna < x)
		{
			write(1,&s,1);
			
		}
		if(coluna == x)
		{
			if(x != 1)
			{
			write(1,&k,1);
			write(1,&n,1);
			coluna = 1;
			linha++;
			}
			if(x == 1)
			{
				write(1,&n,1);
				linha++;
			}
		}
		
	}
	while(coluna <= x && linha == y)
	{	

		if(coluna == 1)
		{
			if(x != 1)
			{
				write(1,&b2,1);
			}
			if(x == 1)
			{
				write(1,&b2,1);
				write(1,&n,1);
			}
		}
		
		coluna++;
		if(coluna > 0 && coluna < x)
		{
			write(1,&k,1);
			
		}
		if(coluna == x)
		{
			write(1,&b1,1);
			write(1,&n,1);
			linha++;
			coluna = 1;
		}
		
	}

}
