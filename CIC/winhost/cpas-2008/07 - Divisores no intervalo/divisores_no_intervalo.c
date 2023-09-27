/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divisores_no_intervalo.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:44:06 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/23 15:07:38 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	i;
	int	t;
	int	max;
	int	ele;
	int	j;
	int	a;
	int	b;

	scanf("%d %d", &a, &b);
	i = a - 1;
	max = -1;
	while (++i <= b)
	{
		j = 0;
		t = 0;
		while (++j <= i)
			if (i % j == 0)
				t++;
		if (t > max)
		{
			max = t;
			ele = i;
		}
	}
	printf("%d %d\n", ele, max);
	return (0);
}
