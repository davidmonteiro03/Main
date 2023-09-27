/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jogo_de_soma_2_numeros.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:24:19 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 19:28:52 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	ans;
	int	tent;
	int	num;

	ans = 134 + 78;
	tent = 0;
	while (tent < 3)
	{
		scanf("%d", &num);
		if (num == ans) break;
		tent++;
	}
	if (tent < 3)
		printf("Acertou");
	else
		printf("Falhou");
	return (0);
}
