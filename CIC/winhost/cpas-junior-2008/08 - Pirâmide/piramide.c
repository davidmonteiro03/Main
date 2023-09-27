/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piramide.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:37:07 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 11:42:07 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	int	i;
	int	k;

	scanf("%d", &a);
	i = 0;
	while (++i <= a)
	{
		k = a;
		while (--k >= i)
			printf(" ");
		printf("/");
		k = -1;
		while (++k < 2 * i)
			if (k > 1)
				printf(" ");
		printf("\\");
		printf("\n");
	}
	return (0);
}
