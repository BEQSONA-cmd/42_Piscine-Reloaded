/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:33:51 by btvildia          #+#    #+#             */
/*   Updated: 2023/11/11 16:08:34 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	a;
	char	z;

	a = 'a';
	z = 'z';
	while (a <= z)
	{
		ft_putchar(a);
		a++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }
