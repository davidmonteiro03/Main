/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nomes_abreviados.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:20:57 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/23 16:07:13 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	atr_sep(char sep[100])
{
	char	i;
	int		t;

	t = 0;
	i = 31;
	while (++i < 127)
		if (i < '0' || (i > '9' && i < 'A') || \
			(i > 'Z' && i < 'a') || (i > 'z'))
			sep[t++] = i;
}

int	valid(char tmp[255])
{
	int	i;

	i = -1;
	while (++i < strlen(tmp))
		if ((tmp[i] < 'A' || tmp[i] > 'Z') && tmp[i] != ' ')
			return (0);
	return (1);
}

int	main(void)
{
	int		i;
	int		j;
	int		t;
	int		n;
	char	*token;
	char	tmp[256];
	char	sep[100];
	char	aux[256][256];
	char	nomes[101][256][256];

	scanf(" %[^\n]s", tmp);
	if (strlen(tmp) <= 255)
	{
		atr_sep(sep);
		n = 0;
		while (strcmp(tmp, "#") != 0)
		{
			if (valid(tmp) && strlen(tmp) <= 255)
				strcpy(aux[n++], tmp);
			scanf(" %[^\n]s", tmp);
		}
		if (n > 0 && n <= 100)
		{
			strcpy(aux[n], "");
			i = -1;
			while (++i < n)
			{
				t = 0;
				token = strtok(aux[i], sep);
				while (token != NULL)
				{
					if (strcmp(token, "DE") != 0 && \
						strcmp(token, "DA") != 0 && \
						strcmp(token, "DOS") != 0)
						strcpy(nomes[i][t++], token);
					token = strtok(NULL, sep);
				}
				strcpy(nomes[i][t], "");
				j = -1;
				while (++j < t)
				{
					if (j == 0 || j == t - 1)
						printf("%s", nomes[i][j]);
					else
						printf("%c.", nomes[i][j][0]);
					if (j < t - 1)
						printf(" ");
				}
				printf("\n");
			}
		}
	}
	return (0);
}
