/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 16:25:25 by aelkhali          #+#    #+#             */
/*   Updated: 2022/05/30 23:23:47 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		check_for_double_char(char *str);
int		base_is_valid(char *str);
int		index_counter(char *str, char letter);

int	calculate_lenght(int n, int base_to_len)
{
	long	temp;
	int		len;

	temp = n;
	len = 0;
	if (temp == 0)
		return (1);
	if (temp < 0)
	{
		temp *= -1;
		len++;
	}
	while (temp > 0)
	{
		temp /= base_to_len;
		len++;
	}
	return (len);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	if (base_is_valid(base))
	{
		while (str[i] <= 32)
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		while (str[i] && index_counter(base, str[i]) != -1)
		{
			res = (res * (ft_strlen(base))) + index_counter(base, str[i]);
			i++;
		}
		return (res * sign);
	}
	return (0);
}

void	ft_putnbr_base(int n, char *b, char *d, int len)
{
	int	i;
	int	base_len;
	int	stop;

	base_len = ft_strlen(b);
	i = len - 1;
	stop = 0;
	if (n < 0)
	{
		d[0] = '-';
		n *= -1;
		stop = 1;
	}
	while (i >= stop)
	{
		d[i] = b[n % base_len];
		n /= base_len;
		i--;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	number;
	int		lenght;
	char	*dest;

	if (!base_is_valid(base_from) || !base_is_valid(base_to))
		return (0);
	number = ft_atoi_base(nbr, base_from);
	lenght = calculate_lenght(number, ft_strlen(base_to));
	dest = malloc(lenght + 1);
	if (!dest)
		return (0);
	ft_putnbr_base(number, base_to, dest, lenght);
	dest[lenght] = '\0';
	return (dest);
}
