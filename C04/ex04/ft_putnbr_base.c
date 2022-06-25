/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 09:27:56 by aelkhali          #+#    #+#             */
/*   Updated: 2022/05/24 13:19:12 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	base_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_for_double_char(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	base_is_valid(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	if (!(check_for_double_char(str)))
		return (0);
	while (str[i])
	{
		if (str[i] <= 32 || str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		l_base;

	n = nbr;
	l_base = base_lenght(base);
	if (base_is_valid(base))
	{
		if (n < 0)
		{	
			ft_putchar('-');
			n = n * -1;
		}
		if (n < l_base)
			ft_putchar(base[n]);
		else if (n >= l_base)
		{
			ft_putnbr_base(n / l_base, base);
			ft_putnbr_base(n % l_base, base);
		}
		else
			ft_putchar(n + '0');
	}
}
