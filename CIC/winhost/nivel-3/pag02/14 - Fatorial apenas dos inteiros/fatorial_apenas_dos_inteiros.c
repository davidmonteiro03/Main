/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fatorial_apenas_dos_inteiros.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:06:38 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 19:12:08 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	double	list[100];
	int	i, j;
	int	fat;

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf("%lf", &list[i]);
		i++;
	}
	i = 0;
	while (i < n)
	{
		if (list[i] == (double)((int)list[i]))
		{
			j = 1;
			fat = 1;
			while (j <= (int)list[i])
			{
				fat *= j;
				j++;
			}
			printf("%d\n", fat);
		}
		i++;
	}
	return (0);
}
