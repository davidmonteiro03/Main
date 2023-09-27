/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mais_economico.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:14:47 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 21:23:12 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	marca[100][100];
	char	economico[100];
	int		consumo[100];
	int		n;
	int		i;
	int		j;
	int		flag;
	int		min;

	scanf("%d", &n);
	i = -1;
	while (++i < n)
	{
		scanf(" %[^\n]s", marca[i]);
		scanf("%d", &consumo[i]);
	}
	flag = 0;
	i = -1;
	while (++i < n)
	{
		j = -1;
		while (++j < n)
			if (i != j && consumo[i] == consumo[j])
				flag = 1;
	}
	if (flag == 0 && n > 0)
	{
		min = consumo[0];
		strcpy(economico, marca[0]);
		i = -1;
		while (++i < n)
		{
			if (consumo[i] < min)
			{
				strcpy(economico, marca[i]);
				min = consumo[i];
			}
		}
		printf("%s\n", economico);
	}
	return (0);
}
