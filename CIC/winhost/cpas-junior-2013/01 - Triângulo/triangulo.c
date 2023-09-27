/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triangulo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:18:26 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 11:20:45 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a > 0 && b > 0 && c > 0 && a < (b + c) && b < (a + c) && c < (a + b))
	{
		printf("E TRIANGULO\n");
		if (a == b && b == c && a == c)
			printf("EQUILATERO\n");
		else if (a == b || b == c || a == c)
			printf("ISOSCELES\n");
		else if (a != b && b != c && a != c)
			printf("ESCALENO\n");
	}
	else
		printf("NAO E TRIANGULO\n");
	return (0);
}
