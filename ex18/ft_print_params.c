/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:48:43 by btvildia          #+#    #+#             */
/*   Updated: 2023/11/11 15:06:30 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int ac, char **av)
{
	int	i;
	int	x;

	if (ac >= 2)
	{
		x = 1;
		while (x < ac)
		{
			i = 0;
			while (av[x][i] != '\0')
			{
				ft_putchar(av[x][i]);
				i++;
			}
			ft_putchar('\n');
			x++;
		}
	}
	return (0);
}
