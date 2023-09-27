/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ip.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:22:39 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 16:27:09 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		i;
	double	n;
	double	a[100];
	double	b[100];
	double	c;
	double	d;
	double	min;
	double	soma;
	double	notaa;
	double	nota[100];
	double	media;
	double	total;

	scanf("%lf", &n);
	min = 1000;
	soma = 0;
	i = -1;
	while (++i < n)
		scanf("%lf %lf", &a[i], &b[i]);
	scanf("%lf %lf", &c, &d);
	i = -1;
	while (++i < n)
	{
		nota[i] = (a[i] / b[i]) * 100;
		if (nota[i] < min)
			min = nota[i];
		soma += nota[i];
	}
	notaa = soma - min;
	media = notaa / (n - 1);
	total = (media * 0.8 +((c / 5) * 100) * 0.15 +((d / 5) * 100) * 0.05) / 5;
	printf("%.2lf\n", total);
	return (0);
}
