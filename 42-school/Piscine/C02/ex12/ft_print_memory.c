/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:43:00 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/30 16:43:01 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (str[i] && i < size)
	{
		if (str[i] < 32 || str[i] > 126)
			write(1, ".", 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

void	printstr(char *str, unsigned int size)
{
	write(1, " ", 1);
	ft_putstr(str, size);
	write(1, "\n", 1);
}

void	printhex(unsigned int i)
{
	write(1, &("0123456789abcdef"[i / 16]), 1);
	write(1, &("0123456789abcdef"[i % 16]), 1);
}

void	getlocation(void *addr)
{
	int				j;
	long long int	i;
	char			arr[17];

	i = (long long int)addr;
	j = 0;
	while (j < 17)
	{
		if (!i)
		{
			while (j < 17)
				arr[16 - j++] = '0';
		}
		arr[16 - j++] = "0123456789abcdef"[i % 16];
		i /= 16;
	}
	arr[j] = 0;
	ft_putstr(&arr[0], 16);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				j;
	int				k;

	i = 0;
	while (((char *)addr)[i] && i < size)
	{
		if (!(i % 16) || i == 0)
			getlocation(&((char *)addr)[i]);
		k = 0;
		j = -1;
		while (++j < 16)
		{
			if (!(j % 2))
				write(1, " ", 1);
			if (((char *)addr)[i + k])
				printhex(((char *)addr)[i + k++]);
			else
				ft_putstr("  ", 2);
		}
		printstr(&((char *)addr)[i], 16);
		i += 16;
	}
	return (addr);
}
