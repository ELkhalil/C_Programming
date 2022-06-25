/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:44:18 by aelkhali          #+#    #+#             */
/*   Updated: 2022/05/30 12:15:47 by aelkhali         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		i;
	char	*src_cpy;

	i = 0;
	src_cpy = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	while (src[i])
	{
		src_cpy[i] = src[i];
		i++;
	}
	src_cpy[i] = '\0';
	return (src_cpy);
}
