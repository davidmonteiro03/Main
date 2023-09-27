/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2006-F3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:33:47 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 19:46:42 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		i;
	int		j;
	int		k;
	char	l;
	char	*alfabeto;

	scanf(" %c", &l);
	if (l >= 'A' && l <= 'Z')
	{
		alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		i = -1;
		while (++i < l - 64)
		{
			k = -1;
			while (++k < l - i - 65)
				printf(" ");
			j = -1;
			while (++j < i + 1)
				printf("%c", j + 65);
			while (--j > 0)
				printf("%c", j + 64);
			k = -1;
			while (++k < l - i - 65)
				printf(" ");
			printf("\n");
		}
	}
	return (0);
}
