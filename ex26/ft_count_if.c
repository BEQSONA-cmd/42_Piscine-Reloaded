/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:01:56 by btvildia          #+#    #+#             */
/*   Updated: 2023/11/12 19:36:30 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_count_if(char **tab, int (*f)(char *));

// int	ft_capital(char *a);

// int	main(void)
// {
// 	char	*array[] = {"Hello", "Beqa", "Gio", "and", "Dashaa", NULL};
// 	int		count;

// 	count = ft_count_if(array, &ft_capital);
// 	printf("%d \n", count);
// }

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	while (*tab != 0)
	{
		if (f(*tab))
		{
			i++;
		}
		tab++;
	}
	return (i);
}

// int	ft_capital(char *a)
// {
// 	int	i;

// 	i = 0;
// 	while (a[i] != '\0')
// 	{
// 		if (a[i] >= 65 && a[i] <= 90)
// 		{
// 			return (1);
// 		}
// 		i++;
// 	}
// 	return (0);
// }
