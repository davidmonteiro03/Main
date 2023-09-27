/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   area_figura.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:52:02 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 15:07:28 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

double	area1(void)
{
	double	b;
	double	h;

	scanf("%lf", &b);
	scanf("%lf", &h);
	return (b * h);
}

double	area2(double pi)
{
	double	raio;
	int		perc;

	scanf("%lf", &raio);
	scanf("%d", &perc);
	return ((double)(perc) / 100 * raio * raio * pi);
}

int	main(void)
{
	int		n;
	int		i;
	char	tipo;
	double	pi;
	double	area;

	scanf("%d", &n);
	pi = 3.14;
	area = 0;
	i = -1;
	while (++i < n)
	{
		scanf(" %c", &tipo);
		if (tipo == 'R')
			area += area1();
		else if (tipo == 'T')
			area += area1() / 2;
		else if (tipo == 'C')
			area += area2(pi);
	}
	printf("%.2lf\n", area);
	return (0);
}
