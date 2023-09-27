/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2006-F2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:27:51 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 19:31:58 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	d;
	int	inv;
	int	s;
	int	t;
	int	c;
	int	w;
	int	som;
	int	i;
	int	j;

	scanf("%d", &n);
	inv = 0;
	s = 0;
	c = 0;
	i = 0;
	while (++i <= n)
		if (n % i == 0)
			s++;
	if (s == 2)
		t = 1;
	else
		t = 0;
	while (n > 0)
	{
		d = n % 10;
		n /= 10;
		inv = inv * 10 + d;
	}
	j = 0;
	while (++j <= inv)
		if (inv % j == 0)
			c++;
	if (c == 2)
		w = 1;
	else
		w = 0;
	som = w + t;
	if (som == 2)
		printf("SIM\n");
	else
		printf("NAO\n");
	return (0);
}
