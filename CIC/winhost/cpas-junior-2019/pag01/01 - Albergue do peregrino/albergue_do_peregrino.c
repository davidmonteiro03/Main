/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   albergue_do_peregrino.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:03:48 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 16:05:07 by Dcaetano         ###   ########.fr       */
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
	int	soma;
	int	total;

	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	soma = a + b + c + d + e + f;
	total = 20 * soma;
	printf("%d\n", total);
	return (0);
}
