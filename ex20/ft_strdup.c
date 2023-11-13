/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:23:18 by btvildia          #+#    #+#             */
/*   Updated: 2023/11/11 15:10:07 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

// #include <string.h>

// char	*ft_strdup(char *src);

// int	main(void)
// {
// 	char	*a;
// 	char	*new_str;

// 	a = "hello";
// 	new_str = strdup(a);
// 	printf("%s \n", new_str);
// 	new_str = ft_strdup(a);
// 	printf("%s \n", new_str);
// 	return (0);
// }

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(ft_strlen(src) + 1);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
