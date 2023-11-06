/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trabalho_pratico_T3_1.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:14:58 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/06 17:07:50 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sort(double s_a[100], int n_a[100], int n)
{
	int		i;
	int		j;
	int		tmp_n;
	double	tmp_s;

	i = -1;
	while (++i < n)
	{
		j = i;
		while (++j < n)
		{
			if (s_a[i] < s_a[j])
			{
				tmp_s = s_a[i];
				s_a[i] = s_a[j];
				s_a[j] = tmp_s;
				tmp_n = n_a[i];
				n_a[i] = n_a[j];
				n_a[j] = tmp_n;
			}
		}
	}
}

int	main(void)
{
	int		n;
	int		i;
	int		nulls;
	int		valid;
	int		n_a[100];
	double	s_a[100];
	double	sum;
	double	max;
	double	min;

	scanf("%d", &n);
	if (n <= 0)
		return (0);
	nulls = 0;
	valid = 0;
	sum = 0;
	i = -1;
	while (++i < n)
	{
		scanf("%d", &n_a[i]);
		scanf("%lf", &s_a[i]);
		if (s_a[i] == 0)
			nulls++;
		else
		{
			if (valid == 0)
			{
				max = s_a[i];
				min = s_a[i];
			}
			else if (s_a[i] > max)
				max = s_a[i];
			else if (s_a[i] < min)
				min = s_a[i];
			sum += s_a[i];
			valid++;
		}
	}
	sort(s_a, n_a, n);
	i = -1;
	while (++i < n)
		printf("%.2lf - %d\n", s_a[i], n_a[i]);
	printf("NULOS %.2lf%%\n", nulls / (double)n * 100);
	printf("MEDIA %.2lf\n", sum / (double)valid);
	i = -1;
	while (++i < n)
		if (s_a[i] == max)
			printf("VENCEDOR %d COM %.2lf\n", n_a[i], s_a[i]);
	printf("AMPLITUDE %.2lf\n", max - min);
	return (0);
}
