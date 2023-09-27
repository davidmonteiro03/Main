/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contar_maiusculas_minusculas_com_o_codigo          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 08:12:12 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/12 08:18:32 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	text[100];
	int		i;
	int		maius;
	int		minus;

	scanf(" %[^\n]s", text);
	maius = minus = 0;
	i = 0;
	while (text[i])
	{
		if (text[i] >= 65 && text[i] <= 90)
			maius++;
		else if (text[i] >= 97 && text[i] <= 122)
			minus++;
		i++;
	}
	printf("MAIUSCULAS: %d\n", maius);
	printf("MINUSCULAS: %d", minus);
	return (0);
}
