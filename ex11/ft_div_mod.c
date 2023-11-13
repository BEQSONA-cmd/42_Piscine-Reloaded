/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:00:56 by btvildia          #+#    #+#             */
/*   Updated: 2023/11/11 15:05:51 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// void	ft_div_mod(int a, int b, int *div, int *mod);

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 1;
// 	y = 1;
// 	ft_div_mod(17, 4, &x, &y);
// 	printf("%d \n", x);
// 	printf("%d", y);
// 	return (0);
// }

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
