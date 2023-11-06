/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chamada_t3_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:03:24 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/06 09:09:18 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		q_50;
	int		q_20;
	int		q_10;
	int		q_sum;
	double	p_tot;
	double	media;

	scanf("%d", &q_50);
	scanf("%d", &q_20);
	scanf("%d", &q_10);
	q_sum = q_50 + q_20 + q_10;
	p_tot = 0.5 * (double)q_50 + 0.2 * (double)q_20 + 0.1 * (double)q_10;
	media = (double)(q_sum) / 3;
	printf("%d\n", q_sum);
	printf("%.2lf\n", p_tot);
	printf("%.2lf\n", media);
	return (0);
}
