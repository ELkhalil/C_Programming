/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:59:46 by aelkhali          #+#    #+#             */
/*   Updated: 2022/05/12 13:02:53 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	digits_printer(int d1, int d2)
{
	ft_putchar((d1 / 10) + '0');
	ft_putchar((d1 % 10) + '0');
	ft_putchar(' ');
	ft_putchar((d2 / 10) + '0');
	ft_putchar((d2 % 10) + '0');
	if (d1 != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	first_digit;
	int	second_digit;

	first_digit = 0;
	second_digit = 0;
	while (first_digit <= 98)
	{
		second_digit = first_digit + 1;
		while (second_digit <= 99)
		{
			digits_printer(first_digit, second_digit);
			second_digit ++;
		}
		first_digit ++;
	}
}
