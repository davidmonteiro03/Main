/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:50:16 by dcaetano          #+#    #+#             */
/*   Updated: 2023/08/30 13:38:34 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_puthex(int nh)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nh > 15)
	{
		ft_puthex(nh / 16);
		ft_puthex(nh % 16);
	}
	else
	{
		ft_putchar(hex[nh]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar(92);
			if (str[i] < 16)
				ft_putchar('0');
			ft_puthex(str[i]);
		}
		i++;
	}
}
/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	text1[100];
	strcpy(text1 , "\t\n");
	text1[2] = 20;
	ft_putstr_non_printable(text1);
	return (0);
}*/
