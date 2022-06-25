/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:02:57 by aelkhali          #+#    #+#             */
/*   Updated: 2022/05/31 23:42:06 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*src_cpy;

	i = 0;
	src_cpy = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!src_cpy)
		return (0);
	while (src[i])
	{
		src_cpy[i] = src[i];
		i++;
	}
	src_cpy[i] = '\0';
	return (src_cpy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*dest;

	i = 0;
	dest = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!dest)
		return (0);
	while (i < ac)
	{
		dest[i].size = ft_strlen(av[i]);
		dest[i].str = av[i];
		dest[i].copy = ft_strdup(av[i]);
		i++;
	}
	dest[i].str = 0;
	return (dest);
}
