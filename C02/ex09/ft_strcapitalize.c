/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:50:42 by aelkhali          #+#    #+#             */
/*   Updated: 2022/05/16 17:36:01 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	trans_to_low_case(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		else
			i++;
	}
}

char	*ft_strcapitalize(char *str)
{	
	int		i;
	char	s;

	trans_to_low_case(str);
	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i + 1] != '\0')
	{
		s = str[i];
		if (!(s >= 'a' && s <= 'z')
			&& !(s >= 'A' && s <= 'Z') && !(s >= '0' && s <= '9'))
		{
			if ((str[i + 1] >= 'a') && (str[i + 1] <= 'z'))
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
