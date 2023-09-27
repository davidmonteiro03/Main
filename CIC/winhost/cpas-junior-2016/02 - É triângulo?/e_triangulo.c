/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_triangulo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:37:34 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 20:38:40 by Dcaetano         ###   ########.fr       */
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
		printf("SIM");
	else
		printf("NAO");
	return (0);
}
