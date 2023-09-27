/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raizes_digitais.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:16:30 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 14:20:20 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	num, aux;

	scanf("%d", &num);
	aux = num;
	while (aux > 10)
	{
		aux = 0;
		while (num > 0)
		{
			aux += num % 10;
			num /= 10;
		}
		num = aux;
	}
	printf("%d\n", num);
	return (0);
}
