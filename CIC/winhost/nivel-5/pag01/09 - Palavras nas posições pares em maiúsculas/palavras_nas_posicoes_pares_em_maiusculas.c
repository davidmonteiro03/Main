/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palavras_nas_posicoes_pares_em_maiusculas          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 08:49:31 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/12 08:58:02 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int		i, j, t;
	int		n;
	char	text[100][100];

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf(" %[^\n]s", text[i]);
		i++;
	}
	i = 0;
	while (i < n)
	{
		j = 0;
		t = 0;
		while (text[i][j])
		{
			if (text[i][j] == ' ')
				t++;
			if (t % 2 == 0)
				printf("%c", toupper(text[i][j]));
			else
				printf("%c", text[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
