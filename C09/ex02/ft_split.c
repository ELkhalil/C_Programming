/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:12:44 by aelkhali          #+#    #+#             */
/*   Updated: 2022/05/31 12:13:41 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_if_contains(char c, char *sprs)
{
	int	i;

	i = 0;
	if (c == '\0')
		return (1);
	while (sprs[i] != '\0')
	{
		if (c == sprs[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_strcpy(char *dest, char *src, char *sp)
{
	int	i;

	i = 0;
	while (check_if_contains(src[i], sp) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int	ws_counter(char *str, char *sp)
{
	int	wc;
	int	i;

	wc = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (check_if_contains(str[i + 1], sp) == 1
			&& check_if_contains(str[i], sp) == 0)
				wc += 1;
		i++;
	}
	return (wc);
}

void	slice_str(char *str, char *sep, char **dst)
{
	int	index;
	int	i;
	int	j;

	i = 0;
	index = 0;
	while (str[i])
	{
		if (check_if_contains(str[i], sep))
			i++;
		else
		{
			j = 0;
			while (!check_if_contains(str[i + j], sep))
				j++;
			dst[index] = malloc(j + 1);
			ft_strcpy(dst[index], &str[i], sep);
			i += j;
			index++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	int		w_c;
	char	**dest;

	w_c = ws_counter(str, charset);
	dest = (char **)malloc(sizeof(char *) * w_c + 1);
	if (!dest)
		return (0);
	slice_str(str, charset, dest);
	dest[w_c] = 0;
	return (dest);
}
