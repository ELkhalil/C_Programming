/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:52:49 by aelkhali          #+#    #+#             */
/*   Updated: 2022/05/30 23:20:22 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
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
