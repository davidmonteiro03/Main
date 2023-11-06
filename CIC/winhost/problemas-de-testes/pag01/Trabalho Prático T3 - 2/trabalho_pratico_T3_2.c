/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trabalho_pratico_T3_2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:10:18 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/06 17:13:30 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	invert(int a[100], int n)
{
	int	i;
	int	tmp;

	i = -1;
	while (++i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}

int	main(void)
{
	int	i;
	int	n;
	int	a[100];

	scanf("%d", &n);
	i = -1;
	while (++i < n)
		scanf("%d", &a[i]);
	invert(a, n);
	i = -1;
	while (++i < n)
		printf("%d\n", a[i]);
	return (0);
}
