/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inversao_de_texto.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:20:36 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 11:39:36 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	invert(char aux[100][100], int n)
{
	char	tmp[100];
	int		i;

	i = -1;
	while (++i < n / 2)
	{
		strcpy(tmp, aux[i]);
		strcpy(aux[i], aux[n - i -1]);
		strcpy(aux[n - i - 1], tmp);
	}
}

int	main(void)
{
	char	aux[100][100];
	char	text[100];
	char	*token;
	char	tmp;
	int		n;
	int		i;
	int		j;

	scanf(" %[^\n]s", text);
	token = strtok(text, " ");
	n = 0;
	while (token != NULL)
	{
		strcpy(aux[n], token);
		n++;
		token = strtok(NULL, " ");
	}
	invert(aux, n);
	i = -1;
	while (++i < n)
	{
		j = -1;
		while (++j < strlen(aux[i]))
		{
			if (j % 2 == 0 && aux[i][j + 1])
			{
				tmp = aux[i][j];
				aux[i][j] = aux[i][j + 1];
				aux[i][j + 1] = tmp;
			}
		}
	}
	i = -1;
	while (++i < n)
	{
		printf("%s", aux[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
