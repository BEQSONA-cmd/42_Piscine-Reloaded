/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:20:56 by btvildia          #+#    #+#             */
/*   Updated: 2023/11/11 15:06:00 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_sqrt(int nb);

// int	main(void)
// {
// 	printf("%d", ft_sqrt(121));
// 	return (0);
// }

int	ft_sqrt(int nb)
{
	int	x;
	int	y;

	x = nb;
	y = 2;
	if (x <= 0)
	{
		return (0);
	}
	if (x == 1)
	{
		return (1);
	}
	if (x >= 2)
	{
		while (y * y <= x)
		{
			if (y * y == x)
			{
				return (y);
			}
			y++;
		}
	}
	return (0);
}
