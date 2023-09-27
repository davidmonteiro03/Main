/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   altura_maxima_de_3_pessoas.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:32:53 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 16:47:54 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a, b, c;

	scanf("%d", &a);
	scanf("%d", &b);
      	scanf("%d", &c);
	if (a != b && a != c && b != c && a >= 0 && b >= 0 && c >= 0)
	{
		printf("A altura maxima e de ");
		if (a > b && a > c)
			printf("%d metro(s) e %d", a / 100, a % 100);
		else if (b > a && b > c)
			printf("%d metro(s) e %d", b / 100, b % 100);
		else if (c > a && c > b)
			printf("%d metro(s) e %d", c / 100, c % 100);
		printf(" centimetros");
	}
	return (0);
}
