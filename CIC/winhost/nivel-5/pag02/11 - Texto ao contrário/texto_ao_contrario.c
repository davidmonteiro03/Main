/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texto_ao_contrario.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:18:05 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/12 09:19:49 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	text[100];
	int		i;

	scanf(" %[^\n]s", text);
	i = 0;
	while (i < strlen(text))
	{
		printf("%c", text[strlen(text) - i - 1]);
		i++;
	}
	return (0);
}
