/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elimina_pontuacao.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:21:27 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/12 09:27:08 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	sinais(char c)
{
	if (c == ':' || c == '.' || c == ',' || c == ';' || c == '!' || c == '?')
		return (1);
	return (0);
}

int	main(void)
{
	char	text[100];
	int		i;

	scanf(" %[^\n]s", text);
	i = 0;
	while (text[i])
	{
		if (sinais(text[i]) == 0)
			printf("%c", text[i]);
		i++;
	}
	return (0);
}
