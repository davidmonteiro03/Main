/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:47:23 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/30 18:11:48 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

void	ft_read_file(char *str)
{
	int		fd;
	int		sz;
	char	c;

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.");
		return ;
	}
	sz = read(fd, &c, sizeof(c));
	while (sz > 0)
	{
		write (1, &c, sizeof(c));
		sz = read(fd, &c, sizeof(c));
	}
	close(fd);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		ft_putstr("File name missing.");
	else if (ac > 2)
		ft_putstr("Too many arguments.");
	else
		ft_read_file(av[1]);
	write (1, "\n", 1);
	return (0);
}
