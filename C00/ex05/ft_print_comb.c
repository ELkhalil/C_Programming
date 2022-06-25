/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:27:30 by aelkhali          #+#    #+#             */
/*   Updated: 2022/05/12 11:58:02 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_me_the_digits(char d1, char d2, char d3)
{
	write(1, &d1, 1);
	write(1, &d2, 1);
	write(1, &d3, 1);
	if (d1 != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	digit1;
	char	digit2;
	char	digit3;

	digit1 = '0';
	digit2 = '0';
	digit3 = '0';
	while (digit1 <= '7')
	{
		digit2 = digit1 + 1;
		while (digit2 <= '8')
		{
			digit3 = digit2 + 1;
			while (digit3 <= '9')
			{
				print_me_the_digits(digit1, digit2, digit3);
				digit3 ++;
			}
			digit2 ++;
		}
		digit1 ++;
	}
}
