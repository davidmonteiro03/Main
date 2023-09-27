/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jogo_de_memoria.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:30:44 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 15:34:29 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	a[100];
	int	soma;
	int	tmp;
	int	som;
	int	s;
	int	i;
	int	k;
	int	el;

	scanf("%d", &n);
	soma = 0;
	som = 0;
	i = -1;
	while (++i < n - 1)
	{
		scanf("%d", &a[i]);
		soma += a[i];
	}
	i = -1;
	while (++i < n - 1)
	{
		k = i;
		while (++k < n - 1)
		{
			if (a[i] > a[k])
			{
				tmp = a[i];
				a[i] = a[k];
				a[k] = tmp;
			}
		}
	}
	i = -1;
	while (++i < n - 1)
		if (i % 2 == 0)
			som += a[i];
	s = som * 2;
	el = s - soma;
	printf("%d\n", el);
	return (0);
}
