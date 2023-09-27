/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operacoes_com_vectores_6.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:22:55 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 10:31:52 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	list[100];
	int	count, tmp;

	scanf("%d", &n);
	if (n >= 2)
	{
		i = 0;
		while (i < n)
		{
			scanf("%d", &list[i]);
			i++;
		}
		scanf("%d", &tmp);
		i = 0;
		count = 0;
		while (i < n)
		{
			if (tmp == list[i])
				count++;
			i++;
		}
		if (count > 0)
			printf("%d\n", count);
		else
			printf("NAO ENCONTRADO\n");
		i = 0;
		while (i < n)
		{
			if (i > 0 && !(list[i - 1] <= list[i]))
				break;
			i++;
		}
		if (i != n)
			printf("NAO ORDENADO");
		else
			printf("ORDENADO");
	}
	return (0);
}
