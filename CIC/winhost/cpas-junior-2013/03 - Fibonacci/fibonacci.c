/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fibonacci.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:26:20 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 11:29:42 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	auxiliar;
	int	n;
	int	i;

	scanf("%d", &n);
	a = 0;
	b = 1;
	printf("%d\n", a);
	printf("%d\n", b);
	i = -1;
	while (++i < n - 2)
	{
		auxiliar = a + b;
		a = b;
		b = auxiliar;
		printf("%d\n", auxiliar);
	}
	return (0);
}
