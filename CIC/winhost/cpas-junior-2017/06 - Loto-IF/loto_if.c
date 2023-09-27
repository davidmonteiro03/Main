/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loto_if.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:11:14 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 11:18:48 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	tent[100];
	int	ans[100];
	int	i;
	int	j;
	int	flag;
	int	count;

	i = -1;
	while (++i < 6)
		scanf("%d", &tent[i]);
	i = -1;
	while (++i < 6)
		scanf("%d", &ans[i]);
	flag = 0;
	i = -1;
	while (++i < 6)
	{
		j = -1;
		while (++j < 6)
			if (i != j && (tent[i] == tent[j] || ans[i] == ans[j]))
				flag = 1;
	}
	if (!flag)
	{
		count = 0;
		i = -1;
		while (++i < 6)
		{
			j = -1;
			while (++j < 6)
				if (tent[i] == ans[j])
					count++;
		}
		if (count < 3)
			printf("AZAR");
		else
			printf("%d PREMIO", 7 - count);
		printf("\n");
	}
	return (0);
}
