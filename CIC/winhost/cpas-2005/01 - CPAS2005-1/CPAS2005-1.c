/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2005-1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:47:17 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/11/05 20:20:32 by dcaetano         ###   ########.fr       */
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
