/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:00:33 by btvildia          #+#    #+#             */
/*   Updated: 2023/11/12 16:43:38 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// void	ft_foreach(int *tab, int length, void (*f)(int));

// void	ft_factorial(int n);

// int	main(void)
// {
// 	int	array[] = {1, 2, 3, 4, 5, 6, 7, 8};
// 	int	size;

// 	size = sizeof(array) / sizeof(int);
// 	ft_foreach(array, size, &ft_factorial);
// 	return (0);
// }

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// void	ft_factorial(int n)
// {
// 	int	i;

// 	i = 1;
// 	while (n > 0)
// 	{
// 		i = i * n;
// 		n--;
// 	}
// 	printf("%d \n", i);
// }
