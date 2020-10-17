void	ft_putchar(char c);

void	rush(int x, int y)
{
	int xCol=0;
	int yLig=0;

	while (yLig<y)
	{
		while(xCol<x)
		{
			if((xCol==0 && yLig==0) || (xCol==x-1 && yLig==y-1))
				ft_putchar('A');
			else if((xCol==0 && yLig==y-1) || (xCol==x-1 && yLig==0))
				ft_putchar('C');
			else if(xCol==0 && (yLig >0 || yLig <y-1))
				ft_putchar('B');
			else if(xCol==x-1 && (yLig>0 || yLig<y-1))
				ft_putchar('B');
			else if(yLig==0 && (xCol>0 || xCol<x-1))
				ft_putchar('B');
			else if(yLig==y-1 && (xCol>0 || xCol<x-1))
				ft_putchar('B');
			else ft_putchar(' ');
			xCol++;
		}
		xCol=0;
		yLig++;
		ft_putchar('\n');
	}
}
