/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operacoes_com_vectores_5.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:13:09 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 10:21:58 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	p;
	int	list[100];

	scanf("%d", &n);
	if (n >= 3)
	{
		i = 0;
		p = 1;
		while (i < n)
		{
			scanf("%d", &list[i]);
			p *= list[i];
			i++;
		}
		printf("%d\n", p);
		i = 0;
		while (i < n)
		{
			if (i == 0 && list[i] >= list[i + 1])
				printf("%d (%d)\n", list[i], i + 1);
			else if (i < n - 1 && list[i] >= list[i - 1] && list[i] >= list[i + 1])
				printf("%d (%d)\n", list[i], i + 1);
			else if (i == n - 1 && list[i] >= list[i - 1])
				printf("%d (%d)\n", list[i], i + 1);
			i++;
		}
	}
	return (0);
}
