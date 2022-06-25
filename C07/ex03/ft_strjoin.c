/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:59:44 by aelkhali          #+#    #+#             */
/*   Updated: 2022/05/30 21:35:42 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

void	do_strcat(int *size, char *dest, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < *size)
	{
		ft_strcat(dest, strs[i]);
		if (i < *size - 1)
			ft_strcat(dest, sep);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		lenght;
	char	*dest;

	i = 0;
	if (size == 0)
	{
		dest = malloc(1);
		dest[0] = 0;
		return (dest);
	}
	lenght = ft_strlen(sep) * (size - 1);
	while (i < size)
		lenght += ft_strlen(strs[i++]);
	dest = malloc(lenght + 1);
	if (!dest)
		return (0);
	dest[0] = 0;
	do_strcat(&size, dest, strs, sep);
	dest[lenght] = '\0';
	return (dest);
}
