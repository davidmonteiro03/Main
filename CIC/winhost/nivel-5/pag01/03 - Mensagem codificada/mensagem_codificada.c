/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mensagem_codificada.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:09:37 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 19:18:11 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	*alfa;
	char	text[100];
	int		i;

	scanf(" %[^\n]s", text);
	i = 0;
	alfa = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while (text[i])
	{
		if (toupper(text[i]) >= 'A' && toupper(text[i]) <= 'Z')
			printf("%c", alfa[(toupper(text[i]) - 61) % 26]);
		i++;
	}
	return (0);
}
