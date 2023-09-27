/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maior_sequencia.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:53:28 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 14:00:32 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	list[100];
	int	i;
	int	max;
	int	alg;
	int	t;

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &list[i]);
		i++;
	}
	i = 0;
	max = 0;
	t = 1;
	alg = list[0];
	while (i < n)
	{
		if (list[i] == list[i + 1])
			t++;
		else
			t = 1;
		if (t > max)
		{
			max = t;
			alg = list[i];
		}
		i++;
	}
	printf("%d\n%d", max, alg);
	return (0);
}
