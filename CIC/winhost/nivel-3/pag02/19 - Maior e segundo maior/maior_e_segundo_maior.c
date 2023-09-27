/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maior_e_segundo_maior.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:30:45 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 19:36:34 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	n;
	double	tmp;
	double	notas[100];
	char	nomes[100][100];
	char	tmp_n[100];
	int	i, j;

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf(" %[^\n]s", nomes[i]);
		scanf("%lf", &notas[i]);
		i++;
	}
	i = 0;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (notas[i] < notas[j])
			{
				tmp = notas[i];
				notas[i] = notas[j];
				notas[j] = tmp;
				strcpy(tmp_n, nomes[i]);
				strcpy(nomes[i], nomes[j]);
				strcpy(nomes[j], tmp_n);
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 2)
	{
		printf("%s\n%.0lf\n", nomes[i], notas[i]);
		i++;
	}
	return (0);
}
