#include <unistd.h>

void ft_putchar(int x, int y);
void primeira(void);
void meio(void);
void ultima(void);

int g_coluna = 1;
int g_linha = 1;
int x,y;
char b1 = '/';
char b2 = '\\';
char k = '*';
char n = '\n';
char s = ' ';

int	main()
{
	ft_putchar(1,5);
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

	primeira(void);
	meio(void);
	ultima(void)

}

void primeira(void){
	while(g_coluna <= x && linha == 1)
	{	
		
		if(g_coluna == 1)
		{
			write(1,&b1,1);
			coluna=1;
		}
		if(g_linha <= y && x == 1)
		{	
			write(1,&n,1);
			g_coluna=0;
			g_linha++;
		}

		g_coluna++;
		if(g_coluna > 0 && g_coluna < x)
		{
			write(1,&k,1);
			
		}
		if(g_coluna == x && x != 1)
		{
			write(1,&b2,1);
			write(1,&n,1);
			g_linha++;
			g_coluna = 1;
		}
		
	}
}

void meio(void){
	while(g_coluna <= x && g_linha < y)
	{	
		if(g_coluna == 1)
		{
			write(1,&k,1);
			if(x == 1){
				g_coluna = 0;
			}
		}
		
		coluna++;
		if(g_coluna > 0 && g_coluna < x)
		{
			write(1,&s,1);
			
		}
		if(g_coluna == x)
		{
			if(x != 1)
			{
			write(1,&k,1);
			write(1,&n,1);
			g_coluna = 1;
			g_linha++;
			}
			if(x == 1)
			{
				write(1,&n,1);
				g_linha++;
			}
		}
		
	}
	
}

void ultima(void){
	while(g_coluna <= x && g_linha == y)
	{	

		if(g_coluna == 1)
		{
			if(x != 1)
			{
				write(1,&b2,1);
			}
			if(x == 1)
			{
				write(1,&b1,1);
				write(1,&n,1);
			}
		}
		
		g_coluna++;
		if(g_coluna > 0 && g_coluna < x)
		{
			write(1,&k,1);
			
		}
		if(g_coluna == x)
		{
			write(1,&b1,1);
			write(1,&n,1);
			g_linha++;
			g_coluna = 1;
		}
		
	}
}