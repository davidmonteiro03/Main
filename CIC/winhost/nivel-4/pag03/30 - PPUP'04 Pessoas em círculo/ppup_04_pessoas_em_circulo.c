/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ppup_04_pessoas_em_circulo.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:07:11 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 15:34:56 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	eliminate(int people[100], int n, int m, int c)
{
	int	p;
	int	e;
	int	i;

	if (n == 1)
		return (people[0]);
	p = (c + m - 1) % n;
	e = people[p];
	i = p;
	while (i < n - 1)
	{
		people[i] = people[i + 1];
		i++;
	}
	printf("%d\n", e);
	return (eliminate(people, n - 1, m, p));
}

int	main(void)
{
	int	n, m, i;
	int	w;
	int	people[100];

	scanf("%d %d", &n, &m);
	i = 0;
	while (i < n)
	{
		people[i] = i + 1;
		i++;
	}
	w = eliminate(people, n, m, 0);
	return (0);
}
