/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lista_espelho.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:43:43 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 18:49:33 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n, flag;
	int	i;
	int	list[100];

	scanf("%d", &n);
	if (n % 2 == 0)
	{
		i = 0;
		while (i < n)
		{
			scanf("%d", &list[i]);
			i++;
		}
		flag = 0;
		i = 0;
		while (i < n / 2)
		{
			if (list[i] != list[i + n / 2])
				flag = 1;
			i++;
		}
		if (flag != 0)
			printf("NAO");
		else
			printf("SIM");
	}
	return (0);
}
