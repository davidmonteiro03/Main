/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_pratico_B2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:05:23 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/20 16:19:03 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

double	get_price(void)
{
	char	c;
	int		d;
	double	price;

	scanf(" %c", &c);
	scanf("%d", &d);
	price = 50;
	if (c == 'P')
		price += 10;
	else if (c == 'M')
		price += 20;
	else if (c == 'G')
		price += 40;
	price += d * 0.1;
	if (price < 80)
		price = 80;
	else if (price > 500)
		price = 500;
	return (price);
}

double	average(double **array, int n)
{
	int		i;
	double	avg;
	double	sum;

	i = -1;
	sum = 0;
	while (++i < n)
	{
		(*array)[i] = get_price();
		sum += (*array)[i];
	}
	avg = sum / n;
	return (avg);
}

int	main(void)
{
	double	*array;
	double	avg;
	int		i;
	int		n;

	scanf("%d", &n);
	array = (double *)malloc(sizeof(double) * n);
	if (!array)
		return (0);
	avg = average(&array, n);
	i = -1;
	while (++i < n)
		printf("PRECO:%.lf\n", array[i]);
	printf("MEDIA:%.1lf\n", avg);
	free(array);
	return (0);
}
