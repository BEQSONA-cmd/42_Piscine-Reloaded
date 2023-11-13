/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:53:14 by btvildia          #+#    #+#             */
/*   Updated: 2023/11/11 15:08:12 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		ft_putchar(str[j]);
		j++;
	}
}

void	ft_swap(char **a, int x, int y)
{
	char	*t;

	t = a[x];
	a[x] = a[y];
	a[y] = t;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (s1[i] == 0 || s2[i] == 0)
	{
		return (s1[i] - s2[i]);
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

void	ft_sort_params(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			ft_swap(av, i, (i + 1));
			i = 0;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	x;

	x = 1;
	ft_sort_params(ac, av);
	if (ac >= 2)
	{
		while (x < ac)
		{
			ft_putstr(av[x]);
			ft_putchar('\n');
			x++;
		}
	}
	return (0);
}
