/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diferenca_de_horas.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:21:40 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 11:23:32 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	e;
	int	f;
	int	dif;

	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	if (c > a)
	{
		e = a * 60 + b;
		f = c * 60 + d;
		dif = f - e;
		printf("%d\n", dif);
	}
	else if (a > c)
	{
		e = a * 60 + b;
		f = (c + 24) * 60 + d;
		dif = f - e;
		printf("%d\n", dif);
	}
	return (0);
}
