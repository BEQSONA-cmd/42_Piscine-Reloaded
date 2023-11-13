/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:33:38 by btvildia          #+#    #+#             */
/*   Updated: 2023/11/13 10:10:31 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_read_file(char *file)
{
	int		fd;
	char	buff[4096];
	ssize_t	bytes_read;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (0);
	}
	bytes_read = read(fd, buff, sizeof(buff));
	if (bytes_read > 0)
	{
		write(1, buff, bytes_read);
		write(1, "\n", 1);
	}
	if (bytes_read == -1)
	{
		write(2, "Error reading file.\n", 20);
		close(fd);
		return (0);
	}
	close(fd);
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	if (!ft_read_file(av[1]))
	{
		return (0);
	}
	return (1);
}
