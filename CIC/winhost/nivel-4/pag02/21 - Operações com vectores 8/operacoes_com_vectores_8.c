/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operacoes_com_vectores_8.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:10:59 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 11:22:13 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i, j;
	int	a[100], b[100], c[100], d[100];

	scanf("%d", &n);
	if (n >= 2)
	{
		i = 0;
		while (i < n)
		{
			scanf("%d", &a[i]);
			i++;
		}
		i = 0;
		while (i < n)
		{
			scanf("%d", &b[i]);
			i++;
		}
		i = 0;
		while (i < n)
		{
			c[i] = a[i] + b[i];
			i++;
		}
		i = 0;
		while (i < n)
			printf("%d\n", c[i++]);
		i = 0;
		while (i < n)
		{
			j = 0;
			while (j < n)
			{
				if (a[i] == b[j])
					break;
				j++;
			}
			if (j == n)
				printf("%d\n", a[i]);
			i++;
		}
		i = 0;
		while (i < n)
		{
			j = 0;
			while (j < n)
			{
				if (b[i] == a[j])
					break;
				j++;
			}
			if (j == n)
				printf("%d\n", b[i]);
			i++;
		}
	}
	return (0);
}
