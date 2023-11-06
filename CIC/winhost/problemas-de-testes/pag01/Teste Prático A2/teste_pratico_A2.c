/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_pratico_A2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:27:27 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/06 17:31:14 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		n;
	int		i;
	double	a[100];
	double	b[100];
	double	media[100];
	double	max;
	char	c[100];

	scanf("%d", &n);
	if (n <= 0)
		return (0);
	i = -1;
	while (++i < n)
	{
		scanf("%lf %lf", &a[i], &b[i]);
		scanf(" %c", &c[i]);
		media[i] = (a[i] / 10 + b[i] / 10) / 2;
		if (c[i] == 'S')
			media[i]++;
		else if (c[i] == 'B')
			media[i] += 3;
		if (media[i] > 20)
			media[i] = 20;
		if (media[i] < 5)
			media[i] = 5;
	}
	max = media[0];
	i = -1;
	while (++i < n)
	{
		if (media[i] > max)
			max = media[i];
		printf("NOTA ATRIBUIDA ALUNO %d:%.0lf\n", i + 1, media[i]);
	}
	printf("NOTA MAXIMA:%.0lf\n", max);
	return (0);
}
