/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lista_de_nomes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:40:54 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 11:50:51 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	sort_names(char nomes[100][100], int size)
{
	char	tmp[100];
	int		i;
	int		j;

	i = -1;
	while (++i < size)
	{
		j = i;
		while (++j < size)
		{
			if (strcmp(nomes[i], nomes[j]) > 0)
			{
				strcpy(tmp, nomes[i]);
				strcpy(nomes[i], nomes[j]);
				strcpy(nomes[j], tmp);
			}
		}
	}
}

int	main(void)
{
	int		i;
	int		n1;
	int		n2;
	char	nomes1[100][100];
	char	nomes2[100][100];
	char	nomes[100][100];

	scanf("%d", &n1);
	i = -1;
	while (++i < n1)
	{
		scanf(" %[^\n]s", nomes1[i]);
		strcpy(nomes[i], nomes1[i]);
	}
	scanf("%d", &n2);
	i = -1;
	while (++i < n2)
	{
		scanf(" %[^\n]s", nomes2[i]);
		strcpy(nomes[n1 + i], nomes2[i]);
	}
	sort_names(nomes, n1 + n2);
	i = -1;
	while (++i < n1 + n2)
	{
		if (i == 0)
			printf("%s\n", nomes[i]);
		else if (strcmp(nomes[i - 1], nomes[i]) != 0)
			printf("%s\n", nomes[i]);
	}
	return (0);
}
