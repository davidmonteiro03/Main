/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   troca_de_caracteres.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:58:20 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 21:10:55 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		i;
	int		t;
	char	text[100];
	char	aux[100];
	char	*alfabeto;

	scanf(" %[^\n]s", text);
	alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	t = 0;
	i = -1;
	while (++i < strlen(text))
		if (text[i] >= 'A' && text[i] <= 'Z')
			aux[t++] = text[i];
	i = -1;
	while (++i < t)
	{
		printf("%c", alfabeto[((aux[i] - 'A') + i % 5 + 1) % 26]);
		if (i % 5 == 4 && aux[i + 1])
			printf(" ");
	}
	printf("\n");
	return (0);
}
