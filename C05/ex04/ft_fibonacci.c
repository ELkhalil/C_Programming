/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:47:19 by aelkhali          #+#    #+#             */
/*   Updated: 2022/05/25 18:32:44 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else
	{
		if (index == 0)
			return (0);
		if (index == 1)
			return (1);
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
