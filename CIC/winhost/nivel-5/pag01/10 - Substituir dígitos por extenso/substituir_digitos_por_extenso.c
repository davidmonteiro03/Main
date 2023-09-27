/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substituir_digitos_por_extenso.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:00:32 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/12 09:14:47 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	text[100];
	int		i;
	char	dig[][10] = {"zero", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove"};

	scanf(" %[^\n]s", text);
	i = 0;
	while (text[i])
	{
		if (text[i] < '0' || text[i] > '9')
			printf("%c", text[i]);
		else
		{
			if (text[i - 1] < '0' || text[i - 1] > '9')
				printf(".%s.", dig[text[i] - '0']);
			else
				printf("%s.", dig[text[i] - '0']);
		}
		i++;
	}
	return (0);
}
