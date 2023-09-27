/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soma_de_digitos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:23:56 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 16:28:33 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	d2;
	int	d3;
	int	somaa;
	int	somab;
	int	somac;
	int	e;
	int	f;
	int	g;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	somaa = 0;
	somab = 0;
	somac = 0;
	e = a;
	f = b;
	g = c;
	while (a > 0)
	{
		d = a % 10;
		a /= 10;
		somaa += d;
	}
	while (b > 0)
	{
		d2 = b % 10;
		b /= 10;
		somab += d2;
	}
	while (c > 0)
	{
		d3 = c % 10;
		c /= 10;
		somac += d3;
	}
	if (somaa != somab && somab != somac && somaa != somac)
	{
		if (somaa > somab && somaa > somac)
			printf("%d\n", e);
		else if (somab > somaa && somab > somac)
			printf("%d\n", f);
		else if (somac > somaa && somac > somab)
			printf("%d\n", g);
	}
	return (0);
}
