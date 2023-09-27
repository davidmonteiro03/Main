/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   troca_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:55:08 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 14:03:32 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	i;
	int	n;
	int	pos[100];
	char	tmp[100];
	char	nomes[100][100];

	scanf("%d", &n);
	if (n % 2 == 0)
	{
		i = 0;
		while (i < n)
		{
			scanf(" %[^\n]s", nomes[i]);
			i++;
		}
		i = 0;
		while (i < n / 2)
		{
			scanf("%d", &pos[i]);
			i++;
		}
		i = 0;
		while (i < n / 2)
		{
			strcpy(tmp, nomes[i]);
			strcpy(nomes[i], nomes[pos[i] - 1]);
			strcpy(nomes[pos[i] - 1], tmp);
			i++;
		}
		i = 0;
		while (i < n)
			printf("%s\n", nomes[i++]);
	}
	return (0);
}
