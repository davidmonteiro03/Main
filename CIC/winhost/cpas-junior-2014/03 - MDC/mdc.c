/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mdc.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:18:34 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 16:20:06 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	scanf("%d %d", &a, &b);
	c = a;
	d = b;
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	printf("m.d.c.(%d,%d)=%d\n", c, d, a);
	return (0);
}
