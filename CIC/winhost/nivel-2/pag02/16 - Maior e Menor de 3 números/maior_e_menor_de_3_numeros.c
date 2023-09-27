/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maior_e_menor_de_3_numeros.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:04:09 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 18:09:15 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	if (a != b && b != c && a != c)
	{
		if (a > b && a > c)
			printf("%d\n", a);
		else if (b > a && b > c)
			printf("%d\n", b);
		else if (c > a && c > b)
			printf("%d\n", c);
		if (a < b && a < c)
			printf("%d", a);
		else if (b < a && b < c)
			printf("%d", b);
		else if (c < a && c < b)
			printf("%d", c);
	}
	return (0);
}
