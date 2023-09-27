/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vogais_maiusculas.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:02:09 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 19:05:41 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	vogal(char c)
{
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		return (1);
	return (0);
}

int	main(void)
{
	int		i;
	char	text[100];

	scanf(" %[^\n]s", text);
	i = 0;
	while (text[i])
	{
		if (vogal(text[i]) == 1)
			text[i] -= 32;
		i++;
	}
	printf("%s", text);
	return (0);
}
