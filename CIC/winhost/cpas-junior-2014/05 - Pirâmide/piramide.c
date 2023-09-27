/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piramide.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:27:54 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 16:29:34 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	t;
	int	k;

	scanf("%d", &n);
	i = 0;
	while (++i <= n)
	{
		k = -1;
		while (++k < i)
		{
			t = k + i;
			if (k < i - 1)
				printf("%d ", t);
			else
				printf("%d", t);
		}
		printf("\n");
	}
	return (0);
}
