/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:56:45 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 15:56:01 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	i;
	int	n;
	int	tmp;
	int	count;

	scanf("%d", &n);
	count = 0;
	i = -1;
	while (++i < n)
	{
		scanf("%d", &tmp);
		if (tmp % 10 == 0)
			count++;
	}
	printf("%d\n", count);
	return (0);
}
