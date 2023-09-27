/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quebra_cabecas.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:01:54 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 11:04:05 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	a[100];
	int	soma;
	int	som;
	int	dif;
	int	i;

	scanf("%d", &n);
	soma = 0;
	som = 0;
	i = 0;
	while (++i < n)
	{
		scanf("%d", &a[i]);
		som += a[i];
	}
	i = 0;
	while (++i <= n)
		soma += i;
	dif = soma - som;
	printf("%d\n", dif);
	return (0);
}
