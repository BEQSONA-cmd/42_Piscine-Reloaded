/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:08:37 by btvildia          #+#    #+#             */
/*   Updated: 2023/11/11 15:05:54 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_iterative_factorial(int nb);

// int	main(void)
// {
// 	printf("%d \n", ft_iterative_factorial(9));
// 	return (0);
// }

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	while (nb > 0 && nb < 13)
	{
		i = i * nb;
		nb--;
	}
	if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	return (i);
}
