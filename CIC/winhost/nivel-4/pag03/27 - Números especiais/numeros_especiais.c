/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numeros_especiais.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:05:01 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 14:43:31 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	i, j, t, count;
	int	n;
	int	list[100];

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &list[i]);
		i++;
	}
	i = 0;
	count = 0;
	while (i < n)
	{
		j = 0;
		t = 1;
		if (i > 0 && i < n - 1)
		{
			while (j < i)
			{
				if (j != i && list[i] > list[j])
					t++;
				j++;
			}
			while (j < n)
			{
				if (j != i && list[i] < list[j])
						t++;
				j++;
			}
			if (t == n)
				count++;
		}
		i++;
	}
	printf("%d", count);
	return (0);
}
