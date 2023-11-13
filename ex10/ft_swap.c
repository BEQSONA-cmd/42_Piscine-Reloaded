/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:54:27 by btvildia          #+#    #+#             */
/*   Updated: 2023/11/11 15:05:45 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// void	ft_swap(int *a, int *b);

// int	main(void)
// {
// 	int	i;
// 	int	x;

// 	i = 12;
// 	x = 24;
// 	ft_swap(&i, &x);
// 	printf("%d \n", i);
// 	printf("%d", x);
// }

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
