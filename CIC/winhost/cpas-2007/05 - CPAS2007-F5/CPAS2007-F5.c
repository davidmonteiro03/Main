/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2007-F5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:06:40 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 21:18:08 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	transform(int a, int b, int c)
{
	if (b == 0)
	{
		if (a + c >= 2)
			return (2);
		return (0);
	}
	if (b == 1)
		return (0);
	if (b == 2)
	{
		if (a == 0 || c == 0)
			return (1);
		return (2);
	}
}

int	main(void)
{
	int	list[10];
	int	i;
	int	a;
	int	b;
	int	c;

	i = -1;
	while (++i < 10)
		scanf("%d", &list[i]);
	i = -1;
	while (++i < 10)
	{
		if (i == 0)
		{
			a = list[9];
			b = list[i];
			c = list[i + 1];
		}
		else if (i == 9)
		{
			a = list[i - 1];
			b = list[i];
			c = list[0];
		}
		else
		{
			a = list[i - 1];
			b = list[i];
			c = list[i + 1];
		}
		printf("%d", transform(a, b, c));
		if (i < 9)
			printf(" ");
	}
	printf("\n");
	return (0);
}
