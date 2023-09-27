/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numero_de_carateres.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:30:09 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/12 09:33:33 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	text[100];
	int		i;
	int		count;

	scanf(" %[^\n]s", text);
	i = 0;
	count = 0;
	while (text[i])
	{
		if (toupper(text[i]) >= 65 && toupper(text[i]) <= 90)
			count++;
		i++;
	}
	printf("%d", count);
	return (0);
}
