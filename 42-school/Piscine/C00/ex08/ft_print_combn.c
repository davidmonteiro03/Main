/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:15:16 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 15:32:27 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *tab, int n)
{
	int		i;
	bool	low;

	i = 0;
	low = 1;
	while (++i < n)
		if (tab[i - 1] >= tab[i])
			low = 0;
	if (low)
	{
		i = -1;
		while (++i < n)
			ft_putchar(tab[i] + '0');
		if (tab[0] < (10 - n))
			write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int		i;
	int		*tab;

	tab = (int *)malloc(sizeof(int) * n);
	i = -1;
	while (++i < n)
		tab[i] = 0;
	while (tab[0] <= (10 - n) && n >= 1 && n < 10)
	{
		print(tab, n);
		tab[n - 1]++;
		i = n;
		while (--i && n > 1)
		{
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
		}
	}
}
/*
int	main(void)
{
	ft_print_combn(9);
	return (0);
}
*/
