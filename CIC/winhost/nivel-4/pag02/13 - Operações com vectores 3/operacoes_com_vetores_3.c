/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operacoes_com_vetores_3.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:48:54 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 09:55:55 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	list[100];
	int	soma;
	int	count;
	int	tmp;

	scanf("%d", &n);
	if (n >= 2)
	{
		i = 0;
		while (i < n)
		{
			scanf("%d", &list[i]);
			i++;
		}
		soma = list[0] + list[n - 1];
		i = 0;
		count = 0;
		while (i < n)
		{
			if (list[i] >= soma)
			{
				printf("%d (%d)\n", list[i], i + 1);
				count++;
			}
			i++;
		}
		printf("%d\n", count);
		i = 0;
		while (i < n / 2)
		{
			tmp = list[i];
			list[i] = list[n - i - 1];
			list[n - i - 1] = tmp;
			i++;
		}
		i = 0;
		while (i < n)
			printf("%d\n", list[i++]);
	}
	return (0);
}
