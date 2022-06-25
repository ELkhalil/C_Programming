/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:14:36 by aelkhali          #+#    #+#             */
/*   Updated: 2022/05/30 12:16:17 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab_range;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	tab_range = (int *)malloc(sizeof(int) * (max - min));
	while (min + i < max)
	{
		tab_range[i] = min + i;
		i++;
	}
	return (tab_range);
}
