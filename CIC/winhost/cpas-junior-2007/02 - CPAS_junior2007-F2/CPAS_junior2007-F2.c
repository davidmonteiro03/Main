/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS_junior2007-F1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:56:30 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/14 17:56:32 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	i, num, alg, t, dig[100];

	scanf("%d", &num);
	scanf("%d", &alg);
	t = 0;
	if (num < 0)
		num = -num;
	while (num > 0)
	{
		dig[t] = num % 10;
		num /= 10;
		t++;
	}
	if (alg > t)
	{
		printf("0");
		return (0);
	}
	i = 0;
	while (i < t)
	{
		if (i == alg - 1)
			printf("%d", dig[i]);
		i++;
	}
	return (0);
}
