/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fatorial.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:02:38 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 18:04:33 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	a;
	int	p;
	int	j;

	scanf("%d", &n);
	i = -1;
	while (++i < n)
	{
		p = 1;
		scanf("%d", &a);
		j = 0;
		while (++j <= a)
			p *= j;
		printf("%d\n", p);
	}
	return (0);
}
