/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frequencia_carateres.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:20:45 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/12 21:36:33 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ordenar(char aux[100], int oco[100])
{
	char	tmpc;
	int		tmpi;
	int		i;
	int		j;

	i = 0;
	while (i < strlen(aux))
	{
		j = i + 1;
		while (j < strlen(aux))
		{
			if (aux[i] > aux[j])
			{
				tmpc = aux[i];
				aux[i] = aux[j];
				aux[j] = tmpc;
				tmpi = oco[i];
				oco[i] = oco[j];
				oco[j] = tmpi;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	char	text[100];
	char	aux[100];
	int		oco[100];
	int		i, j, k, t, flag;

	scanf(" %[^\n]s", text);
	i = 0;
	while (text[i])
	{
		j = 0;
		t = 1;
		flag = 0;
		while (text[j])
		{
			if (i != j && text[i] == text[j])
				t++;
			j++;
		}
		aux[i] = text[i];
		oco[i] = t;
		i++;
	}
	aux[i] = '\0';
	ordenar(aux, oco);
	i = 0;
	while (aux[i])
	{
		if (aux[i] != aux[i + 1])
			printf("%c - %d\n", aux[i], oco[i]);
		i++;
	}
	return (0);
}
