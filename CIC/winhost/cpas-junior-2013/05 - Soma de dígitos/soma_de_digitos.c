/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soma_de_digitos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:38:20 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 11:39:57 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	a;
	int	d;
	int	soma;

	scanf("%d", &n);
	i = -1;
	while (++i < n)
	{
		soma = 0;
		scanf("%d", &a);
		while (a > 0)
		{
			d = a % 10;
			a = a / 10;
			soma += d;
		}
		printf("%d\n", soma);
	}
	return (0);
}
