/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:45:14 by aelkhali          #+#    #+#             */
/*   Updated: 2022/05/21 16:28:24 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	calculate_lenght(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	result;

	i = 0;
	len_dest = 0;
	len_src = 0;
	len_dest = calculate_lenght(dest);
	len_src = calculate_lenght(src);
	if (len_dest < size)
		result = len_dest + len_src;
	else
	{
		result = len_src + size;
		return (result);
	}	
	while (src[i] != '\0' && len_dest < (size - 1))
	{
		dest[len_dest] = src[i];
		i++;
		len_dest++;
	}
	dest[len_dest] = '\0';
	return (result);
}
