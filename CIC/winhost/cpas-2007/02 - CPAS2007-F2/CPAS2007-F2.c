/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2007-F2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:41:29 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 20:43:21 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	main(void)
{
	int	n;
	int	dig;
	int	d;
	int	soma;
	int	t;
	int	i;
	int	r;

	scanf("%d", &n);
	t = n;
	r = n;
	i = 0;
	soma = 0;
	while (n > 0)
	{
		i++;
		d = n % 10;
		n /= 10;
	}
	while (t > 0)
	{
		d = t % 10;
		t /= 10;
		soma += pow(d, i);
	}
	if (soma == r)
		printf("VERDADEIRO\n");
	else
		printf("FALSO\n");
	return (0);
}
