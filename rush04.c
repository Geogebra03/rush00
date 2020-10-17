/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 15:34:43 by sxu               #+#    #+#             */
/*   Updated: 2020/10/17 17:26:07 by sxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char o, char p, char q)
{
	int col;

	col = 1;
	while (col <= x)
	{
		if (col == 1)
			ft_putchar(o);
		else if (col == x)
			ft_putchar(q);
		else
			ft_putchar(p);
		col++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int line;

	if (x <= 0 || y <= 0)
		return ;
	line = 1;
	while (line == 1)
	{
		print_line(x, 'A', 'B', 'C');
		line++;
	}
	while (line > 1 && line < y)
	{
		print_line(x, 'B', ' ', 'B');
		line++;
	}
	while (line == y)
	{
		print_line(x, 'C', 'B', 'A');
		line++;
	}
}
