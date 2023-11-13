/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:47:33 by btvildia          #+#    #+#             */
/*   Updated: 2023/11/11 15:11:14 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

// int	*ft_range(int min, int max);

// int	main(void)
// {
// 	int	i;
// 	int	x;
// 	int	y;
// 	int	*t;

// 	i = 0;
// 	x = 2;
// 	y = 6;
// 	t = ft_range(x, y);
// 	while (i < y - x)
// 	{
// 		printf("%d", t[i]);
// 		i++;
// 	}
// 	return (0);
// }

int	*ft_range(int min, int max)
{
	int	i;
	int	x;
	int	*t;

	if (min >= max)
	{
		return (NULL);
	}
	x = (max - min);
	t = malloc(x * sizeof(int));
	i = 0;
	while (i < x)
	{
		t[i] = min + i;
		i++;
	}
	return (t);
}
