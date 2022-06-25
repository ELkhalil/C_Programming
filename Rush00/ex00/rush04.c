/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:53:59 by aelkhali          #+#    #+#             */
/*   Updated: 2022/05/16 19:56:09 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_row(int r, int x, int c)
{
	if (c == 1)
	{
		if (r == 1)
			ft_putchar('A');
		else if (r == x)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
}

void	middle_rows(int c, int y, int r, int x)
{
	if (c > 1 && c < y)
	{
		if (r == 1 || r == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	last_row(int c, int y, int r, int x)
{
	if (c == y && c != 1)
	{
		if (r == 1)
			ft_putchar('C');
		else if (r == x)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
}

void	rush(int x, int y)
{
	int	r_count;
	int	c_count;

	if (x >= 1 && y >= 1)
	{
		c_count = 1;
		while (c_count <= y)
		{
			r_count = 1;
			while (r_count <= x)
			{
				first_row(r_count, x, c_count);
				middle_rows(c_count, y, r_count, x);
				last_row(c_count, y, r_count, x);
				r_count++;
			}
			c_count++;
			ft_putchar('\n');
		}
	}
	else
		write(1, "Invalid parameters\n", 19);
}
