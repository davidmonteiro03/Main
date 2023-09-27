/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2005-7.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:24:39 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 18:29:34 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	j;
	int	flag;
	int	aux[100];
	int	count;
	int	list[100];

	scanf("%d", &n);
	i = -1;
	while (++i < n)
		scanf("%d", &list[i]);
	count = 0;
	i = -1;
	while (++i < n)
	{
		j = -1;
		flag = 0;
		while (++j < i)
			if (list[i] == list[j])
				flag = 1;
		if (flag == 0)
			aux[count++] = list[i];
	}
	i = -1;
	while (++i < count)
		printf("%d\n", aux[i]);
	printf("%d\n", count);
	return (0);
}
