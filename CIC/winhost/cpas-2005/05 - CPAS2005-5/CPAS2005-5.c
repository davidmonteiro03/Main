/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2005-5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:15:47 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 18:20:01 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	a[100];
	int	b[100];
	int	soma;
	int	i;
	int	k;

	scanf("%d", &n);
	soma = 0;
	i = -1;
	while (++i < n)
		scanf("%d", &a[i]);
	i = -1;
	while (++i < n)
		scanf("%d", &b[i]);
	i = -1;
	while (++i < n)
	{
		k = -1;
		while (++k < n)
			if (i == k)
				soma += a[i] * b[k];
	}
	printf("%d\n", soma);
	return (0);
}
