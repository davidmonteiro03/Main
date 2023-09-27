/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texto_sem_caracteres_repetidos.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:18:44 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/12 08:46:50 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	text[100];
	int	i, k, flag;
	char	aux[100];

	scanf(" %[^\n]s", text);
	i = 0;
	while (text[i])
	{
		k = 0;
		flag = 0;
		while (k < i + 1)
		{
			if (i != k && text[i] == text[k])
				flag = 1;
			k++;
		}
		if (flag != 1)
			printf("%c", text[i]);
		i++;
	}
	return (0);
}
