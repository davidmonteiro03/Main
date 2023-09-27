/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texto_sem_vogais_e_sem_espacos.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 08:05:36 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/12 08:10:11 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	vogal_spc(char c)
{
	if (c == ' ' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
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
		if (vogal_spc(toupper(text[i])) == 0)
			printf("%c", text[i]);
		i++;
	}
	return (0);
}
