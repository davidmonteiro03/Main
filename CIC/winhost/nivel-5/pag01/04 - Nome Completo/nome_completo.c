/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nome_completo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:22:53 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 19:39:59 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main(void)
{
	char	text[100];
	char	nomes[100][100];
	const char	s[2] = " ";
	char	*token;
	int	i, k;

	scanf(" %[^\n]s", text);
	token = strtok(text, s);
	i = 0;
	while (token != NULL)
	{
		strcpy(nomes[i], token);
		i++;
		token = strtok(NULL, s);
	}
	if (nomes[i - 1] != NULL)
	{
		printf("%s", nomes[i - 1]);
		if (i > 1)
		{
			printf(", %s", nomes[0]);
			if (i > 2)
			{
				k = 1;
				while (k < i - 1)
				{
					if (toupper(nomes[k][0]) == nomes[k][0])
						printf(" %c.", nomes[k][0]);
					k++;
				}
			}
		}
	}
	return (0);
}
