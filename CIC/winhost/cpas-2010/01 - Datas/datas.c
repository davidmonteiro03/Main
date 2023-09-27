/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   datas.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:53:12 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/23 19:23:36 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap_num(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	swap_all(int *a, int *b, int *c, int *d, int *e, int *f)
{
	swap_num(a, b);
	swap_num(c, d);
	swap_num(e, f);
}

void	sort_data(int dia[20], int mes[20], int ano[20], int n)
{
	int	i;
	int	j;
	int	tmp;

	i = -1;
	while (++i < n)
	{
		j = i;
		while (++j < n)
		{
			if (ano[i] > ano[j])
				swap_all(&ano[i], &ano[j], &mes[i], &mes[j], &dia[i], &dia[j]);
			else if (ano[i] == ano[j] && mes[i] > mes[j])
				swap_all(&ano[i], &ano[j], &mes[i], &mes[j], &dia[i], &dia[j]);
			else if (ano[i] == ano[j] && mes[i] == mes[j] && dia[i] > dia[j])
				swap_all(&ano[i], &ano[j], &mes[i], &mes[j], &dia[i], &dia[j]);
		}
	}
}

int	main(void)
{
	int	i;
	int	n;
	int	dia[20];
	int	mes[20];
	int	ano[20];

	scanf("%d", &n);
	i = -1;
	while (++i < n)
		scanf("%d %d %d", &dia[i], &mes[i], &ano[i]);
	sort_data(dia, mes, ano, n);
	i = -1;
	while (++i < n)
	{
		if (dia[i] < 10)
			printf("0");
		printf("%d ", dia[i]);
		if (mes[i] < 10)
			printf("0");
		printf("%d ", mes[i]);
		if (ano[i] < 10)
			printf("0");
		printf("%d\n", ano[i]);
	}
	return (0);
}
