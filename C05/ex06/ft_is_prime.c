/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:15:13 by aelkhali          #+#    #+#             */
/*   Updated: 2022/05/28 12:05:54 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	divisor;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	divisor = 2;
	while (divisor <= nb / divisor)
	{
		if (nb % divisor == 0)
			return (0);
		divisor++;
	}
	return (1);
}
