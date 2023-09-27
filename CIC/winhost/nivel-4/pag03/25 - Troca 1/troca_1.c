/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   troca_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:39:57 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 12:54:25 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	n;
	int	i, j;
	int	list[100];
	char	nomes[100][100], res[100][100];

	scanf("%d", &n);
	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			scanf(" %[^\n]s", nomes[i]);
			i++;
		}
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
			while (j < n)
			{
				if (i != j && list[i] == list[j])
					break;
				j++;
			}
			if (j != n)
				break;
			if (list[i] < 1 || list[i] > n)
				break;
			i++;
		}
		if (i == n)
		{
			i = 0;
			while (i < n)
			{
				strcpy(res[i], nomes[list[i] - 1]);
				i++;
			}
			i = 0;
			while (i < n)
				printf("%s\n", res[i++]);
		}
	}
	return (0);
}
