/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:51:05 by btvildia          #+#    #+#             */
/*   Updated: 2023/11/11 15:05:57 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_recursive_factorial(int nb);

// int	main(void)
// {
// 	printf("%d", ft_recursive_factorial(11));
// 	return (0);
// }

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb > 0 && nb < 13)
	{
		i = i * nb * ft_recursive_factorial(nb - 1);
		nb = nb - 1;
	}
	if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	return (i);
}
