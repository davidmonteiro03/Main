/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   salario_funcionario.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:52:01 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/14 21:52:02 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double	v_base, hrs[100], sum;
	int		i, n_semanas;

	scanf("%lf", &v_base);
	scanf("%d", &n_semanas);
	i = 0;
	while (i < n_semanas)
	{
		scanf("%lf", &hrs[i]);
		i++;
	}
	i = 0;
	sum = 0;
	while (i < n_semanas)
	{
		if (hrs[i] <= 40)
			sum += hrs[i] * v_base;
		else if (hrs[i] <= 50)
			sum += 40 * v_base + (hrs[i] - 40) * v_base * 1.5;
		else
			sum += 40 * v_base + 10 * v_base * \
		1.5 + (hrs[i] - 50) * v_base * 2;
		i++;
	}
	printf("%.2lf\n", sum);
	return (0);
}
