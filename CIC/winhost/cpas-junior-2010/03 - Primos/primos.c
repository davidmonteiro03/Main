/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   primos.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:10:02 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 16:14:27 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	i;
	int	a;
	int	s;
	int	p;
	int	t;
	int	b;
	int	r;

	scanf("%d", &a);
	s = 0;
	p = 0;
	t = 0;
	i = 0;
	while (++i <= a)
		if (a % i == 0)
			s++;
	if (s == 2)
	{
		p++;
		printf("%d E PRIMO\n", a);
		printf("PONTUACAO %d\n", p);
	}
	else
	{
		t++;
		printf("%d NAO E PRIMO\n", a);
		printf("TEM MAIS UMA TENTATIVA\n");
	}
	while (t < 2)
	{
		r = 0;
		scanf("%d", &b);
		i = 0;
		while (++i <= b)
			if (b % i == 0)
				r++;
		if (r == 2)
		{
			p++;
			printf("%d E PRIMO\n", b);
			printf("PONTUACAO %d\n", p);
		}
		else if (t < 1)
		{
			t++;
			printf("%d NAO E PRIMO\n", b);
			printf("TEM MAIS UMA TENTATIVA\n");
		}
		else
		{
			t++;
			printf("%d NAO E PRIMO\n", b);
			printf("ESGOTOU AS TENTATIVAS\n");
		}
	}
	printf("PONTUACAO %d\n", p);
	return (0);
}
