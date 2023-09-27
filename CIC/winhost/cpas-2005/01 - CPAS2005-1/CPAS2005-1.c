/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2005-1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:47:17 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 17:49:07 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	p;
	int	i;
	int	a;
	int	imp;

	scanf("%d", &n);
	p = 0;
	imp = 0;
	i = 0;
	while (++i <= n)
	{
		scanf("%d", &a);
		if (a % 2 == 0)
			p++;
		else
			imp++;
	}
	printf("%d %d", p, imp);
	return (0);
}
