/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_pratico_C2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:26:21 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/20 17:35:06 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_range
{
	double	min;
	double	max;
}t_range;

double	table1(double value, double num, char *tit)
{
	double	desc;

	if (value < 500)
	{
		if (num == 0)
			desc = 0.10;
		else if (num == 1)
			desc = 0.08;
		else if (num == 2)
			desc = 0.07;
		else if (num >= 3)
			desc = 0.05;
	}
	else if (value <= 1000)
	{
		if (num == 0)
			desc = 0.15;
		else if (num == 1)
			desc = 0.12;
		else if (num == 2)
			desc = 0.10;
		else if (num >= 3)
			desc = 0.09;
	}
	else
	{
		if (num == 0)
			desc = 0.20;
		else if (num == 1)
			desc = 0.19;
		else if (num == 2)
			desc = 0.16;
		else if (num >= 3)
			desc = 0.10;
	}
	if (strcmp(tit, "U") == 0)
		desc /= 2;
	if (desc * value < 20)
		return (20);
	return (desc * value);
}

double	table2(double value, double num, char *tit)
{
	double	desc;

	if (value < 500)
	{
		if (num == 0)
			desc = 0.15;
		else if (num == 1)
			desc = 0.10;
		else if (num == 2)
			desc = 0.08;
		else if (num >= 3)
			desc = 0.06;
	}
	else if (value <= 1000)
	{
		if (num == 0)
			desc = 0.20;
		else if (num == 1)
			desc = 0.14;
		else if (num == 2)
			desc = 0.12;
		else if (num >= 3)
			desc = 0.10;
	}
	else
	{
		if (num == 0)
			desc = 0.25;
		else if (num == 1)
			desc = 0.21;
		else if (num == 2)
			desc = 0.17;
		else if (num >= 3)
			desc = 0.12;
	}
	if (strcmp(tit, "U") == 0)
		desc /= 2;
	if (desc * value < 20)
		return (20);
	return (desc * value);
}

double	get_irs(void)
{
	double	value;
	char	*def;
	double	num;
	char	*tit;
	double	irs;

	def = (char *)malloc(sizeof(char) * 3);
	if (!def)
		return (0);
	tit = (char *)malloc(sizeof(char) * 3);
	if (!tit)
		return (free(def), 0);
	scanf("%lf", &value);
	scanf("%s", def);
	scanf("%lf", &num);
	scanf("%s", tit);
	irs = 0;
	if (strcmp(def, "D") == 0)
		irs = table1(value, num, tit);
	else if (strcmp(def, "ND") == 0)
		irs = table2(value, num, tit);
	return (free(def), free(tit), irs);
}

t_range	*range(double **irss, int n, int init)
{
	t_range	*range;
	int		i;

	if (init == 1)
		range = (t_range *)malloc(sizeof(t_range));
	i = -1;
	while (++i < n)
	{
		if (init == 0)
			(*irss)[i] = get_irs();
		else
		{
			if (i == 0)
			{
				range->max = (*irss)[i];
				range->min = (*irss)[i];
			}
			if ((*irss)[i] > range->max)
				range->max = (*irss)[i];
			if ((*irss)[i] < range->min)
				range->min = (*irss)[i];
		}
	}
	if (init == 1)
		return (range);
	return (NULL);
}

int	main(void)
{
	t_range	*range_s;
	double	*irss;
	int		n;
	int		i;

	scanf("%d", &n);
	irss = (double *)malloc(sizeof(double) * n);
	if (!irss)
		return (0);
	range(&irss, n, 0);
	range_s = range(&irss, n, 1);
	i = -1;
	while (++i < n)
		printf("IRS:%.lf\n", irss[i]);
	printf("MAXIMO:%.lf\n", range_s->max);
	printf("MINIMO:%.lf\n", range_s->min);
	free(range_s);
	free(irss);
	return (0);
}
