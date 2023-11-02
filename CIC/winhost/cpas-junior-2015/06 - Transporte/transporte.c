/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transporte.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:02:03 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/02 11:02:03 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	res(int a, int b)
{
	int	c;
	int	co;
	int	s;

	c = 0;
	co = 0;
	while (a > 0 || b > 0)
	{
		s = (a % 10) + (b % 10) + c;
		if (s >= 10)
		{
			c = 1;
			co++;
		}
		else
			c = 0;
		a /= 10;
		b /= 10;
	}

	return co;
}

int	main(void)
{
	int	a;
	int	b;

	while (1)
	{
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
			break ;
		printf("%d\n", res(a, b));
	}
	return (0);
}
