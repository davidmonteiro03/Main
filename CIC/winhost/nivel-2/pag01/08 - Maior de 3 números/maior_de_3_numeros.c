/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maior_de_3_numeros.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:29:33 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 16:32:08 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	if (a > b && a > c)
		printf("%d", a);
	else if (b > a && b > c)
		printf("%d", b);
	else if (c > a && c > b)
		printf("%d", c);
	return (0);
}
