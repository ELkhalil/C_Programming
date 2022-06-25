/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:34:45 by aelkhali          #+#    #+#             */
/*   Updated: 2022/05/28 12:09:30 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_if_prime(int nb)
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!check_if_prime(nb))
		nb++;
	return (nb);
}
