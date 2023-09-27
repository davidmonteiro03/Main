/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ocorrencias_de_cada_elemento.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:18:44 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 21:40:01 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	list[100];
	int	i, j, t, k, flag;
	int	aux[100];

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &list[i]);
		i++;
	}
	i = 0;
	while (i < n)
	{
		j = 0;
		t = 1;
		flag = 0;
		while (j < n)
		{
			if (i != j && list[i] == list[j])
				t++;
			j++;
		}
		aux[i] = list[i];
		k = 0;
		while (k < i + 1)
		{
			if (i != k && aux[i] == aux[k]) flag = 1;
			k++;
		}
		if (flag != 1)
			printf("%d - %d\n", list[i], t);
		i++;
	}
	return (0);
}
