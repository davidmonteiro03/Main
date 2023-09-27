/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frequencia_palavras.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:24:17 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/14 15:24:19 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		i, j, t, k, flag;
	char	*token;
	char	text[100];
	char	pal[100][100], aux[100][100];

	scanf (" %[^\n]s", text);
	token = strtok(text, " ");
	i = 0;
	while (token != NULL)
	{
		strcpy(pal[i], token);
		token = strtok(NULL, " ");
		i++;
	}
	j = 0;
	while (j < i)
	{
		k = 0;
		t = 1;
		flag = 0;
		while (k < i)
		{
			if (j != k && strcmp(pal[j], pal[k]) == 0)
				t++;
			k++;
		}
		strcpy(aux[j], pal[j]);
		k = 0;
		while (k < j)
		{
			if (k != j && strcmp(aux[j], aux[k]) == 0)
				flag = 1;
			k++;
		}
		if (flag != 1)
			printf("%d\n", t);
		j++;
	}
	return (0);
}
