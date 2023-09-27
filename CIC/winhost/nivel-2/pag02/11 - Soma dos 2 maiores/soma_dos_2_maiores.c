/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soma_dos_2_maiores.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:59:05 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 17:03:11 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a, b, c;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a != b && a != c && b != c)
	{
		if ((a > b && b > c) || (b > a && a > c))
			printf("%d", a + b);
		else if ((a > c && c > b) || (c > a && a > b))
			printf("%d", a + c);
		else if ((b > c && c > a) || (c > b && c > a))
			printf("%d", b + c);
	}
	return (0);
}
