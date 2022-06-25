/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:17:44 by aelkhali          #+#    #+#             */
/*   Updated: 2022/05/24 11:01:27 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

int	index_counter(char *str, char letter)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (letter == str[i])
			return (i);
		i++;
	}
	return (-1);
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
		while (index_counter(base, str[i]) != -1)
		{
			res = (res * (base_lenght(base))) + index_counter(base, str[i]);
			i++;
		}
		return (res * sign);
	}
	return (0);
}
