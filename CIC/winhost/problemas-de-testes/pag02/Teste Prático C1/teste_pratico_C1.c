/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_pratico_C1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:26:21 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/20 17:08:57 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	table1(double value, double num, char *tit)
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
		printf("IRS:20\n");
	else
		printf("IRS:%.lf\n", desc * value);
}

void	table2(double value, double num, char *tit)
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
		printf("IRS:20\n");
	else
		printf("IRS:%.lf\n", desc * value);
}

int	main(void)
{
	double	value;
	char	*def;
	double	num;
	char	*tit;

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
	if (strcmp(def, "D") == 0)
		table1(value, num, tit);
	else if (strcmp(def, "ND") == 0)
		table2(value, num, tit);
	free(def);
	free(tit);
	return (0);
}
