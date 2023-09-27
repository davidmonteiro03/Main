/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   som_2_maiores.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:34:41 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 17:36:25 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	soma;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a > c && b > c)
	{
		soma = (int)a + b;
		printf("%d", soma);
	}
	else if (b > a && c > a)
	{
		soma = (int)b + c;
		printf("%d", soma);
	}
	else if (a > b && c > b)
	{
		soma = (int)a + c;
		printf("%d", soma);
	}
	return (0);
}
