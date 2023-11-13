/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:18:02 by btvildia          #+#    #+#             */
/*   Updated: 2023/11/11 15:06:25 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

// int	ft_strcmp(char *s1, char *s2);

// int	main(void)
// {
// 	char	a[] = "Hello";
// 	char	b[] = "Hello";

// 	printf("%d \n", ft_strcmp(a, b));
// 	printf("%d", strcmp(a, b));
// 	return (0);
// }

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (s1[i] == 0 || s2[i] == 0)
	{
		x = (s1[i] - s2[i]);
	}
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			x = (s1[i] - s2[i]);
			return (x);
		}
		i++;
	}
	return (x);
}
